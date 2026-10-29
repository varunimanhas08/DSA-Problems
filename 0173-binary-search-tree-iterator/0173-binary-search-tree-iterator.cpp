
class BSTIterator {
private:
    stack<TreeNode*> st;

    // Push all left-side nodes onto the stack
    void pushLeft(TreeNode* root) {
        while (root != nullptr) {
            st.push(root);
            root = root->left;
        }
    }

public:
    BSTIterator(TreeNode* root) {
        pushLeft(root);
    }

    int next() {
        TreeNode* temp = st.top();
        st.pop();

        int ans = temp->val;

        // Process the right subtree, if it exists
        pushLeft(temp->right);

        return ans;
    }

    bool hasNext() {
        return !st.empty();
    }
};
