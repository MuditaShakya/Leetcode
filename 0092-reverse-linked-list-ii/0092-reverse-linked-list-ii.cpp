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
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* leftprev=dummy;
        ListNode* curr=head;
        
        for(int i=0;i<l-1;i++)
        {
            leftprev=curr;
            curr=curr->next;
            
            
        }
        ListNode* prev=NULL;
        ListNode* temp;
        for(int i=0;i<r-l+1;i++)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        leftprev->next->next=curr;
        leftprev->next=prev;
        return dummy->next;
    }
};