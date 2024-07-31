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
    ListNode* sortList(ListNode* head) {
       if(head==NULL) return NULL;
    ListNode* t=head;
        vector<int> v;
        while(t!=NULL)
        {
            v.push_back(t->val);
            t=t->next;
        }
        sort(v.begin(), v.end());
        head->val=v[0];
        head->next=NULL;
        ListNode* tt=head;
        for(int i=1;i<v.size();i++)
        {
             ListNode* cur=new ListNode(v[i]);
            tt->next=cur;
            tt=tt->next;
        }
        return head;
    }
};