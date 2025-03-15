class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            unordered_map<string, vector<string>> groups;
    
            for (const string& str: strs) {
                string key = str;
                sort(key.begin(), key.end());
                groups[key].push_back(str);
            }
    
            vector<vector<string>> result;
            for (const auto& pair: groups) {
                result.push_back(pair.second);
            }
    
            return result;
        }
    };