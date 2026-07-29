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
    
    pair<int,int> pairdia(TreeNode* root)
    {
        if(root==NULL)
        {
            return make_pair(0,0);
        }
        pair<int,int> leftinfo = pairdia(root->left);
        pair<int,int> rightinfo = pairdia(root->right);
        int finalh=max(leftinfo.second,rightinfo.second)+1;
        int currdia=leftinfo.second+rightinfo.second;
        int finaldia=max(leftinfo.first,max(rightinfo.first,currdia));
        return make_pair(finaldia,finalh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int,int> res=pairdia(root);
        return res.first;
    }
};
