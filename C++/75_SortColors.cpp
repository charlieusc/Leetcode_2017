class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        int left = 0, right = len-1, temp = 0;
        while (temp <= right) {
            if (nums[temp] > 1) {
                swap(nums[right], nums[temp]);
                right--;
            } else if( nums[temp] < 1) {
                swap(nums[left], nums[temp]);
                left++;
                temp++;
            } else {
               temp++; 
            }
        }
    }
};