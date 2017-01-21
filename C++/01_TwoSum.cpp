class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        unordered_map<int, int> myMap;
        for (int i=0; i<nums.size(); i++) {
            if (myMap.find(target-nums[i]) != myMap.end()) {
                ret.push_back(myMap[target-nums[i]]);
                ret.push_back(i);
                return ret;
            } else {
                myMap[nums[i]] = i;
            }
        }
        return ret;
    }
};