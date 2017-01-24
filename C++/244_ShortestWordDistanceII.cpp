class WordDistance {
public:
    unordered_map<string, set<int>> wordsMap;
    WordDistance(vector<string> words) {
        for (int i=0; i<words.size(); i++) {
            if (wordsMap.find(words[i]) == wordsMap.end()) {
                set<int> Set;
                Set.insert(i);
                wordsMap[words[i]] = Set;
            } else {
                wordsMap[words[i]].insert(i);
            }
        }
        
    }
    
    int shortest(string word1, string word2) {
        int ret = INT_MAX;
        set<int> Set1 = wordsMap[word1];
        set<int> Set2 = wordsMap[word2];
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

/**
 * Your WordDistance object will be instantiated and called as such:
 * WordDistance obj = new WordDistance(words);
 * int param_1 = obj.shortest(word1,word2);
 */