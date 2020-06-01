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
    
    void invertNode(TreeNode* root){
        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;
        if(root->left!=nullptr)
            invertNode(root->left);
        if(root->right!=nullptr)
            invertNode(root->right);
        return;            
    }
    
    TreeNode* invertTree(TreeNode* root) {
        if(root!=nullptr)
            invertNode(root);
        return root;
    }
};
