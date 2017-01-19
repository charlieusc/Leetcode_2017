class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ret = 0;
        int temp = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != 1) {
                temp = 0;
            } else {
                temp++;
                ret = max(ret, temp);
            }
        }
        return ret;
    }
};