class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int lastZero = -1;
        int leftOnes = 0;
        int rightOnes = 0;
        int ret = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == 0) {
                lastZero = i;
                ret = max(ret, leftOnes + rightOnes + 1);
                leftOnes = rightOnes;
                rightOnes = 0;
            } else {
                rightOnes++;
            }
        }
        ret = max(ret, leftOnes + rightOnes + 1);
        if (lastZero == -1) {
            return nums.size();
        } else {
            return ret;
        }
    }
};