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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL || root2==NULL) return false;
        vector<int> a,b;
        leaf(root1,a);
        leaf(root2,b);
    return(a==b);
        
    }
    void leaf(TreeNode* root, vector<int> &v)
    {
        if(root==NULL)
            return;
        if(root->left==root->right and root->left==NULL)
            v.push_back(root->val);
        leaf(root->left, v);
        leaf(root->right,v);
return;
    }
};