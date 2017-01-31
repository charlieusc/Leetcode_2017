class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int len = triangle.size();
        int ret = INT_MAX;
        for (int i=1; i<len; i++) {
            int n = triangle[i].size();
            for (int j=0; j<n; j++) {
                if (j == 0) {
                    triangle[i][j] += triangle[i-1][j];
                } else if (j == n-1) {
                    triangle[i][j] += triangle[i-1][j-1];
                } else {
                    triangle[i][j] += min(triangle[i-1][j-1], triangle[i-1][j]);
                }
            }
        }
        for (int j=0; j<triangle[len-1].size(); j++) {
            ret = min(ret, triangle[len-1][j]);
        }
        return ret;
    }
};