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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
            return 0;
         int sum=0;
      return sumleftleaf(root, sum);
        
        
    }
    TreeNode* leftleaf(TreeNode* root){
        if(root==NULL) return NULL;
        if(root->left==NULL && root->right==NULL)
            return NULL;
        if(root->left==NULL) return NULL;
        while(root->left!=NULL)
        {
            root=root->left;
            
        } if(root->left==NULL && root->right==NULL) 
            return root;
        return NULL;
    }
    int sumleftleaf(TreeNode* root,int &sum)
    { if(root==NULL)
        return 0;
        TreeNode* t=leftleaf(root);
     if(t!=NULL){
        sum=sum+t->val;
     t->val=0;}
     
        sumleftleaf(root->right, sum);
       sumleftleaf(root->left,sum);
        return sum;
    }
};