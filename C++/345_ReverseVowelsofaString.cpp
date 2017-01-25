class Solution {
public:
    bool isVowels(char c) {
        string A = "aeiouAEIOU";
        for (int i=0; i<A.size(); i++) {
            if (c == A[i]) {
                return true;
            }
        }
        return false;
    }
    string reverseVowels(string s) {
        int i = 0, j = s.size();
        while (i<j) {
            while (i < j && !isVowels(s[i])) {
                i++;
            }
            while (i < j && !isVowels(s[j])) {
                j--;
            }
            if (isVowels(s[i]) && isVowels(s[j])) {
                swap(s[i++], s[j--]);
            }
        }
        return s;
    }
};