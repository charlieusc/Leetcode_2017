class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if (m == 0) return false;
        int n = matrix[0].size();
        if (n == 0) return false;
        int left = 0, right = m*n-1;
        int i = 0, j = 0;
        while(left+1 < right) {
            int mid = (left+right) / 2;
            i = mid/n, j = mid%n;
            if (matrix[i][j] < target) {
                left = mid;
            } else if (matrix[i][j] > target) {
                right = mid;
            } else {
                return true;
            }
        }
        i = left/n;
        j = left%n;
        if (matrix[i][j] == target) {
            return true;
        }
        i = right/n;
        j = right%n;
        if (matrix[i][j] == target) {
            return true;
        }
        return false;
        
    }
};