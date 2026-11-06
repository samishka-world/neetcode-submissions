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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *num= new TreeNode(val);
        
        if(root==NULL) return num;
        if(root->val<num->val)
        {
            if(root->right==NULL) 
            {
                
                root->right=num;
                return root;
            }
            insertIntoBST(root->right,num->val);
        }
        if(root->val>num->val)
        {
            if(root->left==NULL) 
            {
                root->left=num;
                return root;
            }
            insertIntoBST(root->left,num->val);
        }
        return root;
    }
};