class Solution {
public:
    void reverseWords(string &s) {
        reverse(s.begin(), s.end());
        int i = 0, j = 0;
        for (; i<s.size(); i++) {
            if (s[i] == ' ') {
                reverse(s.begin()+j, s.begin()+i);
                j = i+1;
            }
        }
        reverse(s.begin()+j, s.begin()+i);
    }
};