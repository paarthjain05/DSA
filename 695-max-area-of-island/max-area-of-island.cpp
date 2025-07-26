class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<bool>>vis(r,vector<bool>(c,false));
        int area = INT_MIN;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                int curr = 0;
                queue<pair<int,int>>q;
                if(!vis[i][j] && grid[i][j]){q.push({i,j}); vis[i][j] = true;}
                while(!q.empty()){
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    curr++;
                    if(x>0 && !vis[x-1][y] && grid[x-1][y]){
                        q.push({x-1,y});
                        vis[x-1][y] = true;
                    }
                    if(y>0 && !vis[x][y-1] && grid[x][y-1]){
                        q.push({x,y-1});
                        vis[x][y-1] = true;
                    }
                    if(x<r-1 && !vis[x+1][y] && grid[x+1][y]){
                        q.push({x+1,y});
                        vis[x+1][y] = true;
                    }
                    if(y<c-1 && !vis[x][y+1] && grid[x][y+1]){
                        q.push({x,y+1});
                        vis[x][y+1] = true;
                    }
                }
                area = max(area,curr);
            }
        }
        return area;
    }
};