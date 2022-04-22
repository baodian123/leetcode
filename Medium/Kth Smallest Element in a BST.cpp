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
    int count = 0;
    int rs;
    
    int kthSmallest(TreeNode* root, int k) {
        rs = root->val;
        find(root, k);
        return rs;
    }
    
    void find(TreeNode* node, int k) {
        if (!node) {
            return;
        }
        
        find(node->left, k);
        count += 1;
        if (count == k) {
            rs = node->val;
            return;
        }
        find(node->right, k);
    }
};