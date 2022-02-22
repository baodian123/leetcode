/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* createNode(struct TreeNode* node, int val) {
    node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    
    return node;
}

struct TreeNode* appendNode(struct TreeNode* root, int val) {
    struct TreeNode* temp = root, *parent = root;
    while (temp != NULL) {
        parent = temp;
        if (val >= temp->val)
            temp = temp->right;
        else
            temp = temp->left;
    }
    if (val >= parent->val)
        parent->right = createNode(parent, val);
    else
        parent->left = createNode(parent, val);
    
    return root;
}

struct TreeNode* partition(int left, int right, int* nums, struct TreeNode* root) {
    if (left > right) return root;
    if (left == right)
        root = appendNode(root, nums[left]);
    else if (right - left == 1) {
        root = appendNode(root, nums[left]);
        root = appendNode(root, nums[right]);
    }
    else {
        root = appendNode(root, nums[(left+right)/2]);
        root = partition(left, (left+right)/2-1, nums, root);
        root = partition((left+right)/2+1, right, nums, root);
    }
    
    return root;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    if (numsSize < 0) return NULL;
    
    struct TreeNode* root = createNode(root, nums[numsSize/2]);
    
    root = partition(0, numsSize/2-1, nums, root);
    root = partition(numsSize/2+1, numsSize-1, nums, root);
    
    return root;
}