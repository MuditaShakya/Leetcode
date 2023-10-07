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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode();
        ListNode* dummy=temp;
        int carry=0;
        int sum=0;
        while(l1!=NULL || l2!=NULL|| carry==1)
        {
             if(l1!=NULL) {
                 sum=sum+l1->val;
             l1=l1->next;}
             if(l2!=NULL) 
             {sum=sum+l2->val;
              l2=l2->next;
             }
            sum=sum+carry;
            if(sum>9) 
            {
                sum=sum%10;
                 ListNode* newnode=new ListNode();
                newnode->val=sum;
               temp= temp->next=newnode;
                carry=1;
                
            }
            else{
                 ListNode* newnode=new ListNode();
                newnode->val=sum;
                carry=0;
                temp=temp->next=newnode;
              
            }
            sum=0;
        
        }
        return dummy->next;
    }
};