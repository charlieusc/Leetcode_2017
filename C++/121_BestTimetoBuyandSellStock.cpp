class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Min = INT_MAX;
        int ret = 0;
        for (int i=0; i<prices.size(); i++) {
            if (prices[i] < Min) {
                Min = prices[i];
            } else {
                ret = max(ret, prices[i] - Min);
            }
        }
        return ret;
    }
};