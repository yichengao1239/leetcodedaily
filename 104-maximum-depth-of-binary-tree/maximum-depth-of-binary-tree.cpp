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
    int maxDepth(TreeNode* root) { 
        return depth_helper(root);
    }
private:
    int depth_helper(TreeNode* current_node) {
        if(!current_node) {
            return 0;
        }
        int leftDepth = depth_helper(current_node->left);
        int rightDepth = depth_helper(current_node->right);

        return 1 + std::max(leftDepth, rightDepth);
        

    }
};