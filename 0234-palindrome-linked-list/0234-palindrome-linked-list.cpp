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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
            ListNode* h2=head;
            while(h2!=NULL)
            {
                s.push(h2->val);
                h2=h2->next;
            }
        while(head!=NULL)
        {
            if(s.top()==head->val)
                s.pop();
            else return false;
            head=head->next;
        }
        return true;
    }
};