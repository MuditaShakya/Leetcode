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
    ListNode* swapNodes(ListNode* head, int k) {
     
       ListNode* slow=head;   ListNode* fast=head;
        int i=1;
       while (i<k)
       {
           fast=fast->next;
           i++;     
       }
        ListNode* temp=fast;
        
        while(fast->next!=NULL)
        {
            fast=fast->next;  
            slow=slow->next;
        }
        int t=temp->val;
        temp->val=slow->val;
        slow->val=t;
    
    return head;
    }
};