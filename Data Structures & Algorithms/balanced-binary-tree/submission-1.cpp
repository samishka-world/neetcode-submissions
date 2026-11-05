class Solution {
public:
    int maxdepth(TreeNode* root)
    {
        if(root == NULL) return 0;

        int leftdepth = maxdepth(root->left);
        int rightdepth = maxdepth(root->right);

        return max(leftdepth, rightdepth) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;

        if(!isBalanced(root->left) || !isBalanced(root->right))
            return false;

        int balan = abs(maxdepth(root->left) - maxdepth(root->right));

        if(balan > 1) return false;

        return true;
    }
};