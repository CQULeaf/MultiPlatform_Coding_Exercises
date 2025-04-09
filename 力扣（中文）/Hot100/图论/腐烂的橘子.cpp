class Solution {
    public:
        int orangesRotting(vector<vector<int>>& grid) {
            int rows = grid.size();
            int cols = grid[0].size();
            queue<pair<int, int>> q;
            int fresh = 0;
            int minutes = 0;
    
            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < cols; ++j) {
                    if (grid[i][j] == 2) {
                        q.push({i, j});
                    } else if (grid[i][j] == 1) {
                        fresh++;
                    }
                }
            }
    
            if (fresh == 0) return 0;
    
            vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
            while (!q.empty() && fresh > 0) {
                int size = q.size();
                for (int i = 0; i < size; ++i) {
                    auto [x, y] = q.front();
                    q.pop();
                    for (auto [dx, dy] : directions) {
                        int nx = x + dx;
                        int ny = y + dy;
                        if (nx >= 0 && nx < rows && ny >= 0 && ny < cols && grid[nx][ny] == 1) {
                            grid[nx][ny] = 2;
                            q.push({nx, ny});
                            fresh--;
                        }
                    }
                }
                if (!q.empty()) minutes++;
            }
    
            return fresh == 0 ? minutes : -1;
        }
    };