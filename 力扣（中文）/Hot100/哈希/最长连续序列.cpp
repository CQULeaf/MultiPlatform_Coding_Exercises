class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            unordered_set<int> num_set(nums.begin(), nums.end());
            int max_length = 0;
    
            for (int num : num_set) {
                if (num_set.find(num - 1) == num_set.end()) {
                    int current_num = num;
                    int current_length = 1;
    
                    while (num_set.find(current_num + 1) != num_set.end()) {
                        current_num += 1;
                        current_length += 1;
                    }
    
                    max_length = max(max_length, current_length);
                }
            }
    
            return max_length;
        }
    };