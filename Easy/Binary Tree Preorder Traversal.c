/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int count_node(struct TreeNode* node) {
    if (!node) return 0;
    return count_node(node->left) + count_node(node->right) + 1;
}

void traverse(struct TreeNode* node, int* rs, int* top) {
    rs[(*top)++] = node->val;
    if (node->left) traverse(node->left, rs, top);
    if (node->right) traverse(node->right, rs, top);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize){
    int* rs, top = 0;
    *returnSize = count_node(root);
    if (!root) {
        rs = malloc(sizeof(int) * 1);
    } else {
        rs = malloc(sizeof(int) * *returnSize);
        traverse(root, rs, &top);
    }
    
    return rs;
}