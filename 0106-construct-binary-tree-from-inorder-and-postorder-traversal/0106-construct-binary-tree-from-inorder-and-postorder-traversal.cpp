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
    int findPosition(vector<int> &inorder, int element)
    {
        for (int i = 0; i < inorder.size(); i++)
            if (inorder[i] == element)
                return i;
        return -1;
    }
    TreeNode* buildTreeUtil(vector<int> &postorder, vector<int> &inorder, int &index, int start, int end)
    {
        if (index < 0 or start > end)
            return nullptr;

        int element = postorder[index--];
        
        TreeNode *root = new TreeNode(element);
        
        int position = findPosition(inorder, element);

        // right call
        root->right = buildTreeUtil(postorder, inorder, index, position + 1, end);
        // left call
        root->left = buildTreeUtil(postorder, inorder, index, start, position - 1);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size();
        int postOrderIndex = n - 1;
        return buildTreeUtil(postorder, inorder, postOrderIndex, 0, n - 1);
    }
};