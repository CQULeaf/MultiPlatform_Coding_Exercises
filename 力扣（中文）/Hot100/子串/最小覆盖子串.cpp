class Solution {
    public:
        string minWindow(string s, string t) {
            if (s.empty() || t.empty() || s.length() < t.length()) {
                return "";
            }
    
            unordered_map<char, int> t_map;
            for (char c : t) {
                t_map[c]++;
            }
    
            int required = t_map.size();
            int left = 0, right = 0;
            int formed = 0;
    
            unordered_map<char, int> window_map;
    
            int min_len = INT_MAX;
            int start = 0;
    
            while (right < s.length()) {
                char c = s[right];
                window_map[c]++;
    
                if (t_map.find(c) != t_map.end() && window_map[c] == t_map[c]) {
                    formed++;
                }
    
                while (left <= right && formed == required) {
                    c = s[left];
    
                    if (right - left + 1 < min_len) {
                        min_len = right - left + 1;
                        start = left;
                    }
    
                    window_map[c]--;
                    if (t_map.find(c) != t_map.end() && window_map[c] < t_map[c]) {
                        formed--;
                    }
    
                    left++;
                }
                right++;
            }
    
            return min_len == INT_MAX ? "" : s.substr(start, min_len);
        }
    };