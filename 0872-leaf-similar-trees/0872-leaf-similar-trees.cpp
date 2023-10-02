class Solution {
public:
    
    void util(vector<int>& a,TreeNode* root)
    {
        if(!root)
            return;
        if(root->left==root->right && root->left==NULL)
            a.push_back(root->val);
        util(a,root->left);
        util(a,root->right);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> a1,a2;
        util(a1,root1);
        util(a2,root2);
        return a1==a2;
    }
};