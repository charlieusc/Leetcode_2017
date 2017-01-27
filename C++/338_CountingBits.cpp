class Solution {
public:
    int bits(int n) {
        int ret = 0;
        for (int i=0; i<32; i++) {
            if (n >> i & 1) {
                ret++;
            }
        }
        return ret;
    }
    vector<int> countBits(int num) {
        vector<int> ret;
        for (int i=0; i<=num; i++) {
            ret.push_back(bits(i));
        }
        return ret;
    }
};