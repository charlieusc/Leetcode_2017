class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> Map;
        for (int i=0; i<s.size(); i++) {
            char c = s[i];
            if (Map.find(c) == Map.end()) {
                Map[c] = 1;
            } else {
                Map[c]++;
            }
        }
        for (int i=0; i<t.size(); i++) {
            char c = t[i];
            if (Map.find(c) == Map.end()) {
                return false;
            } else {
                Map[c]--;
                if (Map[c] == 0) {
                    Map.erase(c);
                }
            }
        }
        if (Map.empty()) {
            return true;
        }
        return false;
    }
};

class Solution2 {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t) return true;
        return false;
    }
};