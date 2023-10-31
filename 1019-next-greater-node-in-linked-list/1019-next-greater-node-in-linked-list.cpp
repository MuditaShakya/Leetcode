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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        ListNode* node=head;
        while(node)
        { int max=calmax(node);
            v.push_back(max);
            node=node->next;
        }
       
        return v;
    }
    
    int calmax(ListNode* node){
        ListNode* temp=node;
         int max=node->val; 
        while(node->next!=NULL)
        {
            node=node->next;
            if(node->val>max){
                max=node->val;
                break;
            }
        }
        if(max==temp->val)
            max=0;
           
           return max; 
        
    }
};