/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int cal_height(struct TreeNode* node) {
    if (!node) return 0;
    
    int lh = cal_height(node->left), rh = cal_height(node->right);
    if (abs(lh - rh) > 1 || lh < 0 || rh < 0) return -1;
    return lh > rh ? 1 + lh : 1 + rh;
}

bool isBalanced(struct TreeNode* root){
    return cal_height(root) >= 0;
}