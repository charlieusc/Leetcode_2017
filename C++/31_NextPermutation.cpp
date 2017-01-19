class Solution {
public:
    void nextPermutation(vector<int>& nums) {
    //Find the largest index k such that nums[k] < nums[k + 1]. If no such index exists, the permutation is sorted in descending order, just reverse it to ascending order and we are done. For example, the next permutation of [3, 2, 1] is [1, 2, 3].
    //Find the largest index l greater than k such that nums[k] < nums[l].
    //Swap the value of nums[k] with that of nums[l].
    //Reverse the sequence from nums[k + 1] up to and including the final element nums[nums.size() - 1].
        int k = -1;
        int len = nums.size();
        for (int i=len-2; i>=0; i--) {
            if (nums[i] < nums[i+1]) {
                k = i;
                break;
            }
        }
        if (k == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }
        int l=-1;
        for (int i=len-1; i>k; i--) {
            if(nums[k] < nums[i]) {
                l = i;
                break;
            }
        }
        swap(nums[k], nums[l]);
        reverse(nums.begin()+k+1, nums.end());
    }
};