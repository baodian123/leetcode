/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool valider(struct TreeNode* l, struct TreeNode* r){
    if (!l && !r) return true;
    if (!l || !r) return false;
    if (l->val != r->val) return false;
    
    return valider(l->left, r->right) && valider(l->right, r->left);
}

bool isSymmetric(struct TreeNode* root){
    
    if (!root->left && !root->right) return true;
    if (!root->left || !root->right) return false;
    
    return valider(root->left, root->right);
}