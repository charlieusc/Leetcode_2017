class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, multiset<string>> mp;
        vector<vector<string>> ret;
        for (string s : strs) {
            string t = s;
            sort(t.begin(), t.end());
            mp[t].insert(s);
        }
        for (auto it = mp.begin(); it != mp.end(); it++) {
            vector<string> temp;
            for (auto jt = it->second.begin(); jt != it->second.end(); jt++) {
                temp.push_back(*jt);
            }
            ret.push_back(temp);
        }
        return ret;
    }
};