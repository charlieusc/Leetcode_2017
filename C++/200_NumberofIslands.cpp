class Solution {
private:
    int m;
    int n;
    
    void DFS(vector<vector<char>>& grid, int i, int j) {
        if (i<0 || j<0 || i>=m || j>=n || grid[i][j] == '0') return;
        grid[i][j] = '0';
        DFS(grid, i+1, j);
        DFS(grid, i-1, j);
        DFS(grid, i, j+1);
        DFS(grid, i, j-1);
    }
public:
    
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        if (m == 0) return 0;
        n = grid[0].size();
        if (n == 0) return 0;
        int count = 0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (grid[i][j] == '1') {
                    DFS(grid, i, j);
                    count++;
                }
               
            }
        }
        return count;
    }
};