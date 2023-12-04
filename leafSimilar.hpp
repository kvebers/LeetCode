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

    void recursive(vector<int> &newVec, TreeNode *root)
    {
        if (root == NULL)
            return;
        if(root->right == root->left && root->left==NULL)
            newVec.push_back(root->val);
        recursive(newVec, root->left);
        recursive(newVec, root->right);

    }


    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> left, right;
        recursive(left, root1);
        recursive(right, root2);
        return left == right;
    }
};
