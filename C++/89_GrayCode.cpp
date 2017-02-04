class Solution {
public:
    vector<int> grayCode(int n) {
        //G(i) = i ^ (i/2)
        vector<int> ret;
        for (int i=0; i < 1<<n; i++) {
            ret.push_back(i^i>>1);
        }
        return ret;
    }
};