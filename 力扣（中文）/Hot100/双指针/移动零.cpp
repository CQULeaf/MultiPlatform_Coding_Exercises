class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int write_ptr = 0;
    
            for (int read_ptr = 0; read_ptr < nums.size(); ++read_ptr) {
                if (nums[read_ptr] != 0) {
                    nums[write_ptr] = nums[read_ptr];
                    write_ptr++;
                }
            }
    
            while (write_ptr < nums.size()) {
                nums[write_ptr] = 0;
                write_ptr++;
            }
        }
    };