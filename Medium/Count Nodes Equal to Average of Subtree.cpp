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
    int averageOfSubtree(TreeNode* root) {
        int rs = 0;
        count(root, rs);
        return rs;
    }
    
    pair<int, int> count(TreeNode* node, int& rs) {
        pair<int, int> l = {0, 0};
        pair<int, int> r = {0, 0};
        if (node->left) l = count(node->left, rs);
        if (node->right) r = count(node->right, rs);
        
        pair<int, int> ret = {l.first+r.first+node->val, l.second+r.second+1};
        if (ret.first/ret.second == node->val) rs += 1;
        return ret;
    }
};