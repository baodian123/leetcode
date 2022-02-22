/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void count_depth(struct TreeNode* node, int cur, int* depth){
    if (node->left) {
        if (cur+1 > *depth) {
            *depth = cur+1;
        }
        count_depth(node->left, cur+1, depth);
    }
    if (node->right) {
        if (cur+1 > *depth) {
            *depth = cur+1;
        }
        count_depth(node->right, cur+1, depth);
    }
}


int maxDepth(struct TreeNode* root){
    if (!root) return 0;
    int depth = 1;
    
    count_depth(root, 1, &depth);
    
    return depth;
}