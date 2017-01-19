class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        while (left+1 < right) {
            int mid = (left+right)/2;
            if (target > nums[right]) {
                if (target < nums[mid]) {
                    right = mid;
                } else if (target > nums[mid]) {
                    if (nums[mid] >= nums[right]) {
                        left = mid;
                    } else if (nums[mid] < nums[right]) {
                        right = mid;
                    }
                } else {
                    return mid;
                }
            } else if (target < nums[right]) {
                if (target > nums[mid]) {
                    left = mid;
                } else if (target < nums[mid]) {
                    if (nums[mid] >= nums[right]) {
                        left = mid;
                    } else if (nums[mid] < nums[right]) {
                        right = mid;
                    }
                } else {
                    return mid;
                }
            } else {
                return right;
            }
        }
        if (nums[left] == target) {
            return left;
        } else if (nums[right] == target) {
            return right;
        } else {
            return -1;
        }
    }
};