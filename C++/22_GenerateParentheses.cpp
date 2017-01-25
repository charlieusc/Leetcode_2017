class Solution {
public:
    void helper (vector<string> &ret, string temp, int n, int left, int right) {
         if (right > left) {
            return;
        }
        if (right == n) {
            ret.push_back(temp);
            return;
        }
        if (left < n) {
            helper(ret, temp+"(", n, left+1, right);
        }
        if (right < n) {
            helper(ret, temp+")", n, left, right+1);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ret;
        string temp = "";
        int left = 0;
        int right = 0;
        helper(ret, temp+"(", n, left+1, right);
        return ret;
    }
};