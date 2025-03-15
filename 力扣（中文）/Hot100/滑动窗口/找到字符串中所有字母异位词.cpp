class Solution {
    public:
        vector<int> findAnagrams(string s, string p) {
            vector<int> res;
            if (s.size() < p.size()) return res;
    
            array<int, 26> p_count = {0};
            array<int, 26> window_count = {0};
    
            for (char c : p) {
                p_count[c - 'a']++;
            }
    
            int window_size = p.size();
            int left = 0;
    
            for (int right = 0; right < s.size(); right++) {
                window_count[s[right] - 'a']++;
    
                if (right - left + 1 == window_size) {
                    if (window_count == p_count) {
                        res.push_back(left);
                    }
    
                    window_count[s[left] - 'a']--;
                    left++;
                } 
            }
    
            return res;
        }
    };