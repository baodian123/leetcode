/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool traverse(struct TreeNode* node, int num){
    if (!node) return false;
    int diff = num - node->val;
    if (diff == 0 && !node->left && !node->right) return true;
    else return traverse(node->left, diff) || traverse(node->right, diff);
    
}

bool hasPathSum(struct TreeNode* root, int targetSum){
    return traverse(root, targetSum);
}