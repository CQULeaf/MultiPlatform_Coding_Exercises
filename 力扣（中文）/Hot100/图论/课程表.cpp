class Solution {
    public:
        bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
            vector<vector<int>> adj(numCourses);
            vector<int> inDegree(numCourses, 0);
    
            for (const auto& pre : prerequisites) {
                adj[pre[1]].push_back(pre[0]);
                inDegree[pre[0]]++;
            }
    
            queue<int> q;
            for (int i = 0; i < numCourses; i++) {
                if (inDegree[i] == 0) {
                    q.push(i);
                }
            }
    
            int count = 0;
            while (!q.empty()) {
                int curr = q.front();
                q.pop();
                count++;
                for (int neighbor : adj[curr]) {
                    if (--inDegree[neighbor] == 0) {
                        q.push(neighbor);
                    }
                }
            }
    
            return count == numCourses;
        }
    };