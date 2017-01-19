class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        vector<int> ret;
        if (right < 0) {
            ret.push_back(-1);
            ret.push_back(-1);
            return ret;
        }
        while (left + 1 < right) {
            int mid = (left + right) / 2 ;
            if (nums[mid] < target) {
                left = mid;
            } else if (nums[mid] >= target) {
                right = mid;
            }
        }
        if (nums[left] == target) {
            ret.push_back(left);
        } else if (nums[right] == target) {
            ret.push_back(right);
        } else {
            ret.push_back(-1);
            ret.push_back(-1);
            return ret;
        }
        
        left = 0;
        right = nums.size()-1;
        while (left + 1 < right) {
            int mid = (left + right) / 2 ;
            if (nums[mid] <= target) {
                left = mid;
            } else if (nums[mid] > target) {
                right = mid;
            }
        }
        if (nums[right] == target) {
            ret.push_back(right);
        } else if (nums[left] == target) {
            ret.push_back(left);
        } else {
            ret.push_back(-1);
            ret.push_back(-1);
            return ret;
        }
        return ret;
        
        
    }
};