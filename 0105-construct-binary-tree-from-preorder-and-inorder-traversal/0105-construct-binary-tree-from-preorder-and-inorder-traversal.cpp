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
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int istart=0;
        int iend=pre.size()-1;
        int k=0;
        return tree(pre, in, istart, iend, k);
        
    }
    int position(vector<int> in, int key)
    {
        for(int i=0;i<in.size();i++)
        {
            if(in[i]==key)
            
        return i;
        }
        return -1;
    }
    
    TreeNode *tree(vector<int> pre, vector<int> in, int istart, int iend,int& k)     
    {
        if(k>=in.size() || istart>iend)
            return NULL;
        TreeNode* root=new TreeNode(pre[k++]);
        int pos= position(in, root->val);
        root->left=tree(pre,in, istart, pos-1,k);
        root->right=tree(pre, in, pos+1, iend,k);
        return root;
    }
};