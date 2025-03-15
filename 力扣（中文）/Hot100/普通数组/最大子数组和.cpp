class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int max_current = nums[0], max_global = nums[0];
    
            for (int i = 1; i < nums.size(); i++) {
                max_current = max(nums[i], max_current + nums[i]);
                max_global = max(max_global, max_current);
            }
    
            return max_global;
        }
    };