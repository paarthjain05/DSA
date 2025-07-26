class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<bool>> vis(r, vector<bool>(c, false));
        int count = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (vis[i][j] || grid[i][j] == '0')
                    continue;
                queue<pair<int, int>> q;
                q.push({i, j});
                while (!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    cout << x << "  " << y << '\n';
                    q.pop();
                    vis[x][y] = true;
                    if (x > 0) {
                        if (!vis[x - 1][y] && grid[x-1][y] == '1'){q.push({x - 1, y});vis[x-1][y] = true;}
                    }
                    if (y > 0) {
                        if (!vis[x][y - 1] && grid[x][y-1] == '1'){q.push({x , y-1});vis[x][y-1] = true;}
                    }
                    if (x < r - 1) {
                        if (!vis[x + 1][y] && grid[x+1][y] == '1'){q.push({x + 1, y});vis[x+1][y] = true;}
                    }
                    if (y < c - 1) {
                        if (!vis[x][y + 1] && grid[x][y+1] == '1'){q.push({x, y+1});vis[x][y+1] = true;}
                    }
                }
                count++;
            }
        }
        return count;
    }
};