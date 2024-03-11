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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* root2=root;
         TreeNode* node=new TreeNode();
        node->val=val;
        if(root==NULL)
            return node;
        while(root2->left!=NULL ||  root2->right!=NULL)
        {
            if(root2->val>val && root2->left!=NULL ){
                root2=root2->left;
                
            }
            else if(root2->val<val &&  root2->right!=NULL)
                root2=root2->right;
            else break;
        }
       
        
        if(root2->val > val)
            root2->left=node;
        else root2->right=node;
        return root;
    }
};