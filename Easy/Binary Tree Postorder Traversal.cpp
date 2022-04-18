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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> rs;
        traverse(root, rs);
        return rs;
    }
    
    void traverse(TreeNode* node, vector<int>& rs) {
        if (node == NULL) return;
        
        traverse(node->left, rs);
        traverse(node->right, rs);
        rs.push_back(node->val);
    }
};