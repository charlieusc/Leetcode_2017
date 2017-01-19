class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 0, fast = 0;
        int len = nums.size();
        if (len == 0) return 0;
        while (fast < len) {
            if (nums[fast] != nums[slow]) {
                nums[slow+1] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow+1;
        
    }
};