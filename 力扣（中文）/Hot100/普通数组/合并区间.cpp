class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            if (intervals.empty()) {
                return {};
            }
    
            sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
                return a[0] < b[0];
            });
    
            vector<vector<int>> merged;
            merged.push_back(intervals[0]);
    
            for (int i = 1; i < intervals.size(); ++i) {
                int start = intervals[i][0];
                int end = intervals[i][1];
    
                int last_end = merged.back()[1];
    
                if (start <= last_end) {
                    merged.back()[1] = max(last_end, end);
                } else {
                    merged.push_back(intervals[i]);
                }
            }
    
            return merged;
        }
    };