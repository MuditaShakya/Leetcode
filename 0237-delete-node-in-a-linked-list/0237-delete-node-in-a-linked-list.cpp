/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* n) {
    // store the value of next node in node itself.
        ListNode* n2=n->next;
        n->val=n2->val;
        n->next=n2->next;
        
        
        
    }
};