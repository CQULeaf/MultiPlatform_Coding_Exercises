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
        int pathSum(TreeNode* root, int targetSum) {
            unordered_map<long, int> prefixSumCount;
            prefixSumCount[0] = 1;
            return backtrack(root, 0, targetSum, prefixSumCount);
        }
    
        int backtrack(TreeNode* node, long currSum, int targetSum, unordered_map<long, int> &prefixSumCount) {
            if (!node) return 0;
    
            currSum += node->val;
            int res = prefixSumCount[currSum - targetSum];
    
            prefixSumCount[currSum]++;
            res += backtrack(node->left, currSum, targetSum, prefixSumCount);
            res += backtrack(node->right, currSum, targetSum, prefixSumCount);
            prefixSumCount[currSum]--;
    
            return res;
        }
    };