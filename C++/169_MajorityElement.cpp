class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> myMap;
        for (int i=0; i<nums.size(); i++) {
            if (myMap.find(nums[i]) == myMap.end()) {
                myMap[nums[i]] = 1;
            } else {
                myMap[nums[i]]++;
            }
            if (myMap[nums[i]] > nums.size()/2) {
                return nums[i];
            }
        }
        return nums[0];
    }

    int majorityElement2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};