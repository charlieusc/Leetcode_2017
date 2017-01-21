class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> myMap;
        for (int i=0; i<nums.size(); i++) {
            if (i > k) {
                myMap[nums[i-k-1]]--;
            }
            
            if (myMap.find(nums[i]) == myMap.end()) {
                myMap[nums[i]] = 1;
            } else {
                myMap[nums[i]]++;
            }
            
            if (myMap[nums[i]] > 1) {
                return true;
            }
        }
        return false;
    }
};