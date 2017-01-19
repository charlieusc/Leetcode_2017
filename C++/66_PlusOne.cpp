class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        vector<int> ret;
        int i = len-1, plus = 1;
        while (i >= 0) {
            int temp = digits[i];
            if (plus == 1) {
                if (temp == 9) {
                    temp = 0;
                } else {
                    temp += 1;
                    plus = 0;
                }
            }
            ret.push_back(temp);
            i--;
        }
        if (len > 0 && plus == 1) {
            ret.push_back(1);
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};