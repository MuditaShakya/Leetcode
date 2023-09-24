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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int ri=nums.size()-1;
        TreeNode* ans=maketree(nums, 0, ri);
        return ans;
    }
    TreeNode* maketree(vector<int> nums, int l, int r)
    {
        if(l>r)
            return NULL;
        int mid=l+(r-l)/2;  //this s imp
        TreeNode* t=new TreeNode(nums[mid]);
        t->left=maketree(nums, l, mid-1);
        t->right=maketree(nums, mid+1, r);
        return t;
    }
};