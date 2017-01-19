class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ret;
        int rowS = 0, rowE = matrix.size()-1;
        if (rowE == -1) return ret;
        int colS = 0, colE = matrix[0].size()-1;
        if (colE== -1) return ret;
        
        while (colS < colE && rowS < rowE) {
            for (int i=colS; i<colE; i++) {
                ret.push_back(matrix[rowS][i]);
            }
            for (int i=rowS; i<rowE; i++) {
                ret.push_back(matrix[i][colE]);
            }
            for (int i=colE; i>colS; i--) {
                ret.push_back(matrix[rowE][i]);
            }
            for (int i=rowE; i>rowS; i--) {
                ret.push_back(matrix[i][colS]);
            }
            rowS++;
            colS++;
            rowE--;
            colE--;
        }
        if (rowS==rowE) {
            for (int i=colS; i<=colE; i++){
                ret.push_back(matrix[rowS][i]);
            }
        } else if (colS==colE) {
            for (int i=rowS; i<=rowE; i++){
                ret.push_back(matrix[i][colS]);
            }
        }
        return ret;
    }
};