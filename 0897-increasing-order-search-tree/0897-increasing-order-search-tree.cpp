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
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL) return NULL;
        vector<int> v;
        inorder(root, v);
        TreeNode* ans=new TreeNode(v[0],NULL,NULL);
                TreeNode* temp=ans;
        for(int i=1;i<v.size();i++)
        { TreeNode* node=new TreeNode(v[i]);
         ans->right=node;
         ans=ans->right;
        }
        return temp;
    }
    
    void inorder(TreeNode* root, vector<int> &a)
    {
        if(root!=NULL)
        {
        inorder(root->left,a);
         a.push_back(root->val);
        inorder(root->right,a);
        }
            
    }
};

