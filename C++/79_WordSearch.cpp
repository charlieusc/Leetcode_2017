class Solution {
public:
    bool helper(vector<vector<char>>& board, string word, int i, int j, int index) {
        if (index == word.size()) return true;
        bool flag = false;
        
        if(i>=0 && i<board.size() && j>=0 && j<board[0].size() && board[i][j] == word[index]) {
            board[i][j] = '\0';
            
            flag = (helper(board, word, i+1, j, index+1) || 
            helper(board, word, i-1, j, index+1) ||
            helper(board, word, i, j+1, index+1) ||
            helper(board, word, i, j-1, index+1));
            
            board[i][j] = word[index];
        }
        
        return flag;
  
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        if (m == 0) return false;
        int n = board[0].size();
        if (n == 0) return false;
        int len = word.size();
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if(helper(board, word, i, j, 0) == true) {
                    return true;
                }
            }
        }
        return false;
    }
};