/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isValid(struct TreeNode* root, long min, long max) {
    if (!root) return true;
    if (root->val <= min || root->val >= max) return false;
    
    return isValid(root->right, root->val, max) && isValid(root->left, min, root->val);
}

bool isValidBST(struct TreeNode* root){
    return isValid(root, LONG_MIN, LONG_MAX);
}