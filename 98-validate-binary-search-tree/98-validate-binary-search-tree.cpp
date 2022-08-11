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
    bool isValidBST(TreeNode* root) {
        return isValid(root,NULL,NULL);
    }
    
    bool isValid(TreeNode *root, int *l, int *u){
        if(!root)return true;
        if(u && root->val>=*u)
            return false;
        if(l&&root->val<=*l)
            return false;
        return isValid(root->left,l,&(root->val))&&isValid(root->right,&(root->val),u);
    }
};