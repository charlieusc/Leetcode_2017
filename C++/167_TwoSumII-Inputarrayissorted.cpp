class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ret;
        unordered_map<int, int> Map;
        for (int i=0; i<numbers.size(); i++) {
            if (Map.find(target-numbers[i])!=Map.end()) {
                ret.push_back(Map[target-numbers[i]]+1);
                ret.push_back(i+1);
                return ret;
            } else {
                Map[numbers[i]] = i;
            }
        }
        return ret;
    }
};