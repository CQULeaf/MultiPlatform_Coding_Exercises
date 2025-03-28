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
    private:
        unordered_map<int, int> index;
    
    public:
        TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
            int n = inorder.size();
            for (int i = 0; i < n; ++i) {
                index[inorder[i]] = i;
            }
            return myBuildTree(preorder, inorder, 0, n - 1, 0, n - 1);
        }
    
        TreeNode* myBuildTree(vector<int>& preorder, vector<int>& inorder, int preorderLeft, int preorderRight, int inorderLeft, int inorderRight) {
            if (preorderLeft > preorderRight) {
                return nullptr;
            }
    
            int preorderRoot = preorderLeft;
            int inorderRoot = index[preorder[preorderRoot]];
    
            TreeNode* root = new TreeNode(preorder[preorderRoot]);
            int leftSubtreeSize = inorderRoot - inorderLeft;
            root->left = myBuildTree(preorder, inorder, preorderLeft + 1, preorderLeft + leftSubtreeSize, inorderLeft, inorderRoot - 1);
            root->right = myBuildTree(preorder, inorder, preorderLeft + leftSubtreeSize + 1, preorderRight, inorderRoot + 1, inorderRight);
            return root;
        }
    };