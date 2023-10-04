/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int goodNodes(TreeNode* root) {
        
        int count=0;
        if(!root->left && !root->right)
            return 1;
      iterate(root,root->val,count);
        return count;
        
    }
    
    void iterate(TreeNode* root, int max, int& count)
    {
        if(root==NULL)
            return;  
        if(max<=root->val)
        {
            count++;
            max=root->val;
            
        }
        iterate(root->left, max, count);
        iterate(root->right, max, count);
        
    }
    
};