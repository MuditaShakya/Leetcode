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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* node=new ListNode(); //create a dummy node
        node->next=head;
        ListNode* fast=head;
        ListNode* slow=head;
        if(head->next==NULL)
            return NULL;
        int i=0;
        for(i=1;i<=n;++i)
        {
            fast=fast->next;
            
        }
        if(fast== NULL)
            return head->next;
        while(fast->next != NULL)
        {
            fast=fast->next;
            slow=slow->next;
            
        }
        slow->next=slow->next->next;
        return node->next;
    }
};