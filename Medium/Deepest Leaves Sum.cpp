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
    int deepestLeavesSum(TreeNode* root) {
        pair<int, int> rs = {1, 0};
        int cur = 1;
        cal(root, rs, cur);
        return rs.second;
    }
    
    void cal(TreeNode* node, pair<int, int>& rs, int cur) {
        if (node->left) cal(node->left, rs, cur+1);
        if (node->right) cal(node->right, rs, cur+1);
        
        if (cur > rs.first) {
            rs.first = cur;
            rs.second = node->val;
        } else if (cur == rs.first) {
            rs.second += node->val;
        }
    }
};