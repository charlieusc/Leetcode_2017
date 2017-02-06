class Solution {
public:
    bool helper(string str, string subs) {
        if (subs.size() == 0 || str.size() % subs.size() != 0) return false;
        for (int i=0; i<str.size(); i+=subs.size()) {
            if (str.substr(i, subs.size()) != subs) {
                return false;
            }
        }
        return true;
    }
    bool repeatedSubstringPattern(string str) {
        for (int i=0; i<str.size()/2+1; i++) {
            if(helper(str, str.substr(0, i))) {
                return true;
            }
        }
        return false;
    }
    
};