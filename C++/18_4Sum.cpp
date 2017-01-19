class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        vector<vector<int>> ret;
        for (int i=0; i<len; i++) {
            int a = nums[i];
            for (int j=i+1; j<len; j++) {
                int b = nums[j];
                int m=j+1, n=len-1;
                while (m<n) {
                    int c = nums[m];
                    int d = nums[n];
                    int sum = a+b+c+d;
                    if (sum < target) {
                        m++;
                    } else if (sum > target) {
                        n--;
                    } else {
                        vector<int> temp;
                        temp.push_back(a);
                        temp.push_back(b);
                        temp.push_back(c);
                        temp.push_back(d);
                        ret.push_back(temp);
                        while (m<n && nums[m] == c) m++;
                        while (m<n && nums[n] == d) n--;
                    }
                }
                while (j<len-1 && nums[j+1] == nums[j]) j++;
            }
            while (i<len-1 && nums[i+1] == nums[i]) i++;
        }
        return ret;
    }
};