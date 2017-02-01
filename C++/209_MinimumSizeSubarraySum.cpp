class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        vector<int> sums;
        int sum = 0;
        int ret = INT_MAX;
        for (int i=0; i<nums.size(); i++) {
            sum += nums[i];
            if (sum >= s) {
                ret = min(ret, i+1);
            }
            sums.push_back(sum);
            for (int j=sums.size()-1; j>=0; j--) {
                if (sums[i]-sums[j] >= s) {
                    ret = min(ret, i-j);
                    break;
                }
            }
        }
        return ret == INT_MAX ? 0 : ret;
    }
};