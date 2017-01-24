class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {
        set<int> Set1;
        set<int> Set2;
        int ret = INT_MAX;
        for (int i=0; i<words.size(); i++) {
            if (words[i] == word1) {
                Set1.insert(i);
            } else if (words[i] == word2) {
                Set2.insert(i);
            }
        }
        auto i=Set1.begin();
        auto j=Set2.begin();
        while (i!=Set1.end() && j!=Set2.end()) {
            ret = min(ret, abs(*i - *j));
            if (*i < *j) {
                i++;
            } else {
                j++;
            }
        }
        return ret;
    }
};