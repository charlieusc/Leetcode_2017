class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        unordered_map<string, multiset<string>> mp;
        vector<vector<string>> ret;
        for (string s : strings) {
            string t = s;
            for (int i=0; i<t.size(); i++) {
                int shift = t[i] - s[0];
                if (shift < 0) {
                    shift += 26;
                }
                t[i] = 'a' + shift;
            }
            mp[t].insert(s);
        }
        for (auto m : mp) {
            vector<string> temp;
            for (auto it = m.second.begin(); it != m.second.end(); it++) {
                temp.push_back(*it);
            }
            ret.push_back(temp);
        }
        return ret;
    }
};