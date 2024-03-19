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
    bool isValidBST(TreeNode* root) {
       return isBST(root, nullptr, nullptr);
    }
    bool isBST(TreeNode* root, TreeNode* min, TreeNode* max) //min and max are range
    {
        if(!root)
            return true;
        if(min && min->val>=root->val || max && max->val<=root->val)
            return false;
       return isBST(root->left, min, root ) && isBST(root->right, root, max);
    }
};