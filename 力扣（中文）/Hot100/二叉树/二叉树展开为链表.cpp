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
        void flatten(TreeNode* root) {
            TreeNode* curr = root;
            while (curr != nullptr) {
                if (curr->left != nullptr) {
                    TreeNode* next = curr->left;
                    TreeNode* predecessor = next;
                    while (predecessor->right != nullptr) {
                        predecessor = predecessor->right;
                    }
                    predecessor->right = curr->right;
                    curr->left = nullptr;
                    curr->right = next;
                }
    
                curr = curr->right;
            }
        }
    };