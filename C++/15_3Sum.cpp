class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ret;
        int len = nums.size();
        for (int i=0; i<len; i++) {
            int sum = -nums[i];
            int j=i+1, k=len-1;
            while (j<k){
                if (nums[j] + nums[k] < sum) {
                    j++;
                } else if (nums[j] + nums[k] > sum) {
                    k--;
                } else {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ret.push_back(temp);
                    while(j<k && temp[1]==nums[j]) {
                        j++;
                    }
                    while(j<k && temp[2]==nums[k]) {
                        k--;
                    }
                }
            }
            while(i<len && nums[i+1] == nums[i]) {
                i++;
            }
        }
        return ret;
    }
};