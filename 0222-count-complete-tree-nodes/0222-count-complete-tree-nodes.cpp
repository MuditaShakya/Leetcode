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
    int countNodes(TreeNode* root) {
    if(root==NULL)
    return 0;
      int res;
    int lh=findleft(root);
    int rh=findright(root);
    if(lh==rh)
    return (1<<lh)-1;

    return 1+ countNodes(root->right)+countNodes(root->left);
    }
    
    int findleft(TreeNode* root) {
        int a=0;
        while(root!=NULL){
            a++;
        root=root->left;
        }
        return a;
    }

 int findright(TreeNode* root) {
        int a=0;
        while(root!=NULL){
            a++;
        root=root->right;
        }
        return a;
    }

    
};