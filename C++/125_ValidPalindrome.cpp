class Solution {
public:
    bool isALetterNum(char c) {
        int i = c-'a';
        int j = c-'A';
        int k = c-'0';
        if ((i>=0 && i<=25) || (j>=0 && j<=25) || (k>=0 && k<=9)) {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int i=0, j=s.size()-1;
        while(i<j) {
            while (i<j && !isALetterNum(s[i])) {
                i++;
            }
            while (i<j && !isALetterNum(s[j])) {
                j--;
            }
            if (i<j && tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};