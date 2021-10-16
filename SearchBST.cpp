class Solution
{
public:
    TreeNode* searchBST(TreeNode* root, int val) 
    {
         if(!root) return root;
         TreeNode *node=new TreeNode(); 
         if(val<root->val)
           node=searchBST(root->left,val);
        else if(val>root->val)
            node=searchBST(root->right,val);
         else  
            node=root;
        
        return node;
    }
};
