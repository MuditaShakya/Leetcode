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
    ListNode* middleNode(ListNode* h) {
        ListNode* temp=h; 
        int l=1;
        while(temp->next!=NULL)
        {
            l++;
            temp=temp->next;
        } 
        int m=(l/2)+1; int i=1;
       while(i<m && h->next!=NULL){
           h=h->next;
           i++;
       }
        return h;
    }
};