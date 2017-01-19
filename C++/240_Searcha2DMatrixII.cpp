class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if (m == 0) return false;
        int n = matrix[0].size();
        if (n == 0) return false;
        for (int i = 0; i < m; i++) {
            int left = 0, right = n-1;
            while (left + 1 < right) {
                int mid = (left + right) / 2;
                if (matrix[i][mid] < target) {
                    left = mid;
                } else if (matrix[i][mid] > target) {
                    right = mid;
                } else {
                    return true;
                }
            }
            if (matrix[i][left] == target) {
                return true;
            } else if (matrix[i][right] == target) {
                return true;
            }
        }
        return false;
    }
};