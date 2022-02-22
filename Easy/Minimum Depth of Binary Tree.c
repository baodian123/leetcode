/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void count_min_depth(struct TreeNode* node, int* min_depth, int cur){
    if (!node) return;
    else {
        cur += 1;
        if (!node->left && !node->right && *min_depth > cur) *min_depth = cur;
        count_min_depth(node->left, min_depth, cur);
        count_min_depth(node->right, min_depth, cur);
    }
}

int minDepth(struct TreeNode* root){
    if (!root) return 0;
    
    int min_depth = INT_MAX;
    count_min_depth(root, &min_depth, 0);
    
    return min_depth;
}