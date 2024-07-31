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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* t=head; int c=1;
        
        while(t->next!=NULL)
        {
         c++;   
            t=t->next;
        }
        if(c==1)
            return NULL;
        t=head;
        int mid=c/2;
        int i=0;
        ListNode* tt;
        while(i!=mid)
        {
            tt=t;
            t=t->next;
            i++;
        }
        ListNode* l=t->next;
        
        if(l!=NULL){
        t->val=l->val;
        t->next=l->next;
        }
        else tt->next=NULL;
        
        return head;
    }
};