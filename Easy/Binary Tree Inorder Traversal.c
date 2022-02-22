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

void grs(struct TreeNode* node, int* rs, int* returnSize){
    if(node->left) grs(node->left, rs, returnSize);
    rs[(*returnSize)++] = node->val;
    if(node->right) grs(node->right, rs, returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    *returnSize = 0;
    if(root == NULL) return NULL;
    int *rs = (int*)malloc(sizeof(int)*100);
    
    struct TreeNode* temp = root;
    
    grs(temp, rs, returnSize);
    
    return rs;
}