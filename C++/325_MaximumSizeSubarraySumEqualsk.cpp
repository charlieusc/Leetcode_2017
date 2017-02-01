class Solution {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
        vector<int> sums;
        int sum = 0;
        int ret = 0;
        for (int i=0; i<nums.size(); i++) {
            sum += nums[i];
            if (sum == k) {
                ret = max(ret, i+1);
            }
            sums.push_back(sum);
            for (int j=0; j < sums.size(); j++) {
                if (sums[i]-sums[j] == k || ret > i-j) {
                    ret = max(ret, i-j);
                    break;
                }
            }
        }
        return ret;
    }
};

class Solution2 {
public:
    int maxSubArrayLen(vector<int>& nums, int k) {
       unordered_map<int, int> Sums;
       int sum = 0;
       int ret = 0;
       for (int i=0; i<nums.size(); i++) {
           sum+=nums[i];
           if (sum == k) {
               ret = i+1;
           } else if (Sums.find(sum-k)!=Sums.end()) {
               ret = max(ret, i - Sums[sum-k]);
           }
           if (Sums.find(sum) == Sums.end()) {
               Sums[sum] = i;
           }
       }
       return ret;
    }
};