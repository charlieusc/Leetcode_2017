class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int ret = nums[0] + nums[1] + nums[2];
        for (int i=0; i<len; i++) {
            int j=i+1, k=len-1;
            while(j<k) {
                int temp = nums[i] + nums[j] + nums[k];
                if (abs(temp - target) < abs(ret - target)) {
                    ret = temp;
                }
                if ( temp < target) {
                    j++;
                } else if (temp > target) {
                    k--;
                } else {
                    return target;
                }
            }
        }
        return ret;
    }
};