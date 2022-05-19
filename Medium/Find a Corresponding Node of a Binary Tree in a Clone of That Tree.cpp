/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return get_node(cloned, target);
    }
    
    TreeNode* get_node(TreeNode* node, TreeNode* target) {
        if (!node) return NULL;
        if (node->val == target->val) return node;
        
        TreeNode* temp = NULL;
        if ((temp = get_node(node->left, target)) != NULL) return temp;
        if ((temp = get_node(node->right, target)) != NULL) return temp;
        
        return temp;
    }
};