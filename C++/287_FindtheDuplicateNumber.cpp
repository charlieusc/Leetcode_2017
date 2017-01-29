class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++) {
            while(nums[nums[i]]!=nums[i]) {
                swap(nums[nums[i]], nums[i]);
            }
        }
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != i) {
                return nums[i];
            }
        }
        return -1;
    }
};