class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        if (m == 0) return;
        int n = board[0].size();
        if (n == 0) return;
        vector<pair<int, int>> dir;
        dir.push_back(make_pair(0,1));
        dir.push_back(make_pair(0,-1));
        dir.push_back(make_pair(1,0));
        dir.push_back(make_pair(-1,0));
        dir.push_back(make_pair(1,-1));
        dir.push_back(make_pair(-1,1));
        dir.push_back(make_pair(1,1));
        dir.push_back(make_pair(-1,-1));
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                board[i][j] *= 2;
            }
        }
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                int count = 0;
                for (int k=0; k<dir.size(); k++) {
                    int ii = dir[k].first, jj = dir[k].second;
                    if (i+ii >= 0 && i+ii < m && j+jj >= 0 && j+jj < n && board[i+ii][j+jj]/2 == 1) {
                        count++;
                    }
                }
                if (count < 2 || count > 3) {
                    if (board[i][j] == 0) {
                        board[i][j] = 0;
                    } else {
                        board[i][j] = 2;
                    }
                } else if (count == 3) {
                    if (board[i][j] == 0) {
                        board[i][j] = 1;
                    } else {
                        board[i][j] = 3;
                    }
                } else {
                    if (board[i][j] == 0) {
                        board[i][j] = 0;
                    } else {
                        board[i][j] = 3;
                    }
                }
            }
        }
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                board[i][j] %= 2;
            }
        }
    }
};