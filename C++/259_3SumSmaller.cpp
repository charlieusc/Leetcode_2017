class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {
        int ret = 0;
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size(); i++) {
            int l = i+1, r = nums.size()-1;
            while(l < r) {
                if (nums[i] + nums[l] + nums[r] < target) {
                    ret += r-l;
                    l++;
                } else {
                    r--;
                }
            }
        }
        return ret;
    }
};