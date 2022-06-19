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
    int minCameraCover(TreeNode* root) {
        int rs = 0;
        return dfs(root, rs) == -1 ? rs + 1 : rs;
    }
    
    int dfs(TreeNode* node, int& rs) {
        if (!node) return 0;
        
        int left = dfs(node->left, rs);
        int right = dfs(node->right, rs);
        
        if (left == -1 || right == -1) {
            rs += 1;
            return 1;
        }
        
        if (left == 1 || right == 1)
            return 0;
        
        return -1;
    }
};