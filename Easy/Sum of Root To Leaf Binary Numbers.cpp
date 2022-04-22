/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        int rs = 0;
        generate(root, rs, root->val);
        
        return rs;
    }
    
    void generate(TreeNode* node, int& rs, int cur) {
        if (!node->left && !node->right) {
            rs += cur;
        }
        if (node->left) {
            generate(node->left, rs, (cur<<1)+node->left->val);
        }
        if (node->right) {
            generate(node->right, rs, (cur<<1)+node->right->val);
        }
    }
};