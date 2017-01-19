class Solution {
public:
    void helper(vector<vector<int>> &ret, vector<int> temp, vector<int> &nums, int i) {
        temp.push_back(nums[i]);
        ret.push_back(temp);
        
        for (int j = i+1; j < nums.size(); j++) {
            helper (ret, temp, nums, j);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ret;
        vector<int> temp;
        ret.push_back(temp);
        for (int i=0; i<nums.size(); i++) {
            helper(ret, temp, nums, i);
        }
        return ret;
    }
    
};