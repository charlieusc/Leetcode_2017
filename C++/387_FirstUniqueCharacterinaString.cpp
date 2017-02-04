class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> mp(26, 0);
        int ret = -1;
        for (char c : s) {
            mp[c-'a']++;
        }
        for (int i=0; i<s.size(); i++) {
            if (mp[s[i]-'a'] == 1) {
                return i; 
            }
        }
        return -1;
    }
};