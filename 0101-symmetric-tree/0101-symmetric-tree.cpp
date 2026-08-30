class Solution {
public:

    bool isMirror(TreeNode* left, TreeNode* right) {
        // Both are NULL
        if (left == NULL && right == NULL)
            return true;

        // Only one is NULL
        if (left == NULL || right == NULL)
            return false;

        // Check values and opposite children
        return (left->val == right->val) &&
               isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }
};