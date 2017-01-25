class Solution {
public:
    bool isLeft(char c) {
        string left = "({[";
        for (char s : left) {
            if (c == s) {
                return true;
            }
        }
        return false;
    }
    bool isValid(string s) {
        stack<char> S;
        for (int i=0; i<s.size(); i++) {
            if (isLeft(s[i])) {
                S.push(s[i]);
            } else {
                if (S.empty()) {
                    return false;
                } else {
                    char l = S.top();
                    S.pop();
                    if(l == '(' && s[i] != ')') {
                        return false;
                    }
                    if(l == '[' && s[i] != ']') {
                        return false;
                    }
                    if(l == '{' && s[i] != '}') {
                        return false;
                    }
                }
            }
        }
        if (S.empty()) {
            return true;
        }
        return false;
    }
};