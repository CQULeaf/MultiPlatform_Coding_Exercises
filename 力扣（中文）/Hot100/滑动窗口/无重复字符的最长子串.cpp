class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            unordered_set<char> window;
            int max_length = 0;
            int left = 0;
            int right = 0;
    
            while (right < s.size()) {
                if (window.find(s[right]) == window.end()) {
                    window.insert(s[right]);
                    right++;
                    max_length = max(max_length, right - left);
                } else {
                    window.erase(s[left]);
                    left++;
                }
            }
    
            return max_length;
        }
    };