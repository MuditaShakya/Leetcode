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
    ListNode* swapPairs(ListNode* h1) {
        ListNode* curr=h1;
        ListNode* prev=new ListNode();
        prev->next=h1;
        if(h1==NULL || h1->next==NULL)
            return h1;
        ListNode* sib=h1->next;
        
        
        ListNode* newhead=new ListNode();
         newhead=h1;
        while(curr->next!=NULL)
        {
            curr->next=sib->next;
            sib->next=prev->next;
            prev->next=sib;
            if(newhead==h1)
            newhead=prev->next;
        
            curr=curr->next;
            prev=sib->next;
            if(curr == NULL) break;
            sib=curr->next;
        }
        if(newhead !=NULL)
        return newhead;
    return h1;
    }
};