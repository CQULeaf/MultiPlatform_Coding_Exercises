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
        bool isValidBST(TreeNode* root) {
            TreeNode* prev = nullptr;
            return inorderCheck(root, prev);
        }
    
        bool inorderCheck(TreeNode* node, TreeNode*& prev) {
            if (!node) return true;
    
            if (!inorderCheck(node->left, prev))
                return false;
    
            if (prev && node->val <= prev->val) 
                return false;
            
            prev = node;
    
            return inorderCheck(node->right, prev);
        }
    };