class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, k = 2;
        for (int j = 0; j<nums.size(); j++) {
            if (i < k || nums[j] > nums[i-k]) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};