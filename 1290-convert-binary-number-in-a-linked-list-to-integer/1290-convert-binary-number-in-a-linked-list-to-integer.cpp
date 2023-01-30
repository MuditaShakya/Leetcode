/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        while(head!=NULL)
        {
            v.push_back(head->val);
            head=head->next;
        } 
        reverse(v.begin(), v.end());
        int l=v.size(); int  dec_val=0; int base=1;
     for(int i=0;i<l;i++)
     {
        int d=v[i];
         dec_val+= d*base;
         base=base*2;
     }
        return dec_val;
    }
};  // make use of vector