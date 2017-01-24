class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        if (len < 2) return;
        for (int i=0; i<k; i++) {
            int temp1 = nums[len-1];
            for (int j=0; j<nums.size(); j++) {
                int temp2 = nums[j];
                nums[j] = temp1;
                temp1 = temp2;
            }
        }
    }
};