class Solution {
public:
    void recoverTree(TreeNode* root) {
        TreeNode *first = nullptr;
        TreeNode *second = nullptr;
        TreeNode *prev = nullptr;
        TreeNode *curr = root;

        while (curr != nullptr) {

            if (curr->left == nullptr) {

                // Visit curr
                if (prev != nullptr && prev->val > curr->val) {
                    if (first == nullptr)
                        first = prev;

                    second = curr;
                }

                prev = curr;
                curr = curr->right;

            } else {

                // Find inorder predecessor
                TreeNode* temp = curr->left;

                while (temp->right != nullptr &&
                       temp->right != curr) {
                    temp = temp->right;
                }

                if (temp->right == nullptr) {
                    // Create temporary link
                    temp->right = curr;
                    curr = curr->left;
                } else {
                    // Remove temporary link
                    temp->right = nullptr;

                    // Visit curr
                    if (prev != nullptr && prev->val > curr->val) {
                        if (first == nullptr)
                            first = prev;

                        second = curr;
                    }

                    prev = curr;
                    curr = curr->right;
                }
            }
        }

        // Swap the two incorrect values
        swap(first->val, second->val);
    }
};