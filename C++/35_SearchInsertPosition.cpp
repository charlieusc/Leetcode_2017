class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        int left = 0, right = len-1;
        if (target < nums[0]) {
            return 0;
        } else if (target > nums[len-1]) {
            return len;
        }
        if (right < 0) {
            return 0;
        }
        while (left + 1 < right) {
            int mid = (left + right) / 2;
            if (nums[mid] < target) {
                left = mid;
            } else if (nums[mid] > target) {
                right = mid;
            } else {
                return mid;
            }
        }
        if (nums[left] == target) {
            return left;
        } else if (nums[right] == target) {
            return right;
        } else {
            return left+1;
        }

       
    }
};