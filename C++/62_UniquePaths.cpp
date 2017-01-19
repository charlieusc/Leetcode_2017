class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> path(2, vector<int>(n, 1));
        for (int i=1; i<m; i++) {
            for (int j=1; j<n; j++) {
                path[i%2][j] = path[(i-1)%2][j] + path[i%2][j-1];
            }
        }
        return path[(m-1)%2][n-1];
    }
};