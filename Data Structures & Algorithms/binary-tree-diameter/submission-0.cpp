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
    int height(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        int curr=max(leftheight,rightheight)+1;
        return curr;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int currdia=height(root->left)+height(root->right);
        int leftdia=diameterOfBinaryTree(root->left);
        int rightdia=diameterOfBinaryTree(root->right);
        int currd= max(currdia,max(leftdia,rightdia));
        return currd;
    }
};
