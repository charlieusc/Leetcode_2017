class Solution {
public:void helper(set<vector<int>> &Set, vector<int> temp, vector<int> &nums, int i) {
        temp.push_back(nums[i]);
        sort(temp.begin(), temp.end());
        if (Set.find(temp) == Set.end()) {
            Set.insert(temp);
        }
        
        for (int j = i+1; j < nums.size(); j++) {
            helper (Set, temp, nums, j);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ret;
        set<vector<int>> Set;
        vector<int> temp;
        ret.push_back(temp);
        for (int i=0; i<nums.size(); i++) {
            helper(Set, temp, nums, i);
        }
        for (auto it = Set.begin(); it != Set.end(); it++) {
            ret.push_back(*it);
        }
        return ret;
    }
};