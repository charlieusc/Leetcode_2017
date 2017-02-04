class Solution {
public:
    bool isSame(vector<int> A, vector<int> B) {
        for (int i = 0; i<A.size(); i++) {
            if (A[i] != B[i]) {
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> ret;
        vector<int> charS(26, 0);
        vector<int> charP(26, 0);
        for (int i=0; i<p.size(); i++) {
            int c = p[i] - 'a';
            charP[c]++;
        }
        for (int i=0; i<s.size(); i++) {
            int c = s[i] - 'a';
            charS[c]++;
            if (i > p.size()-1 && i > 0) {
                charS[s[i-p.size()]-'a']--;
            }
            if (isSame(charP, charS)) {
                ret.push_back(i-p.size()+1);
            }
        }
        return ret;
    }
};