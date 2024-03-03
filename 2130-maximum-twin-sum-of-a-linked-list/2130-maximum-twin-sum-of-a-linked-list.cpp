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
    int pairSum(ListNode* head) {
    
        //find middle
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next !=NULL && fast->next->next !=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
       ListNode* newHead= reverse(slow->next);
        
        ListNode* first=head;
        ListNode* sec=newHead;
            int sum=0;
            int ans=0;
        while(sec !=NULL)
        {
            sum=first->val+ sec->val;
            if(sum>ans)
                ans=sum;
            
            first=first->next;
            sec=sec->next;
        }
        reverse(newHead);
        return ans;
    }
    ListNode* reverse(ListNode* h1)
    {
        ListNode* current = h1;
        ListNode *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            next = current->next;
        
            current->next = prev;
        
            prev = current;
            current = next;
        }
        h1 = prev;
        return h1;
         
    }
};