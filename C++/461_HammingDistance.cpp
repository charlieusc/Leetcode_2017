class Solution {
public:
    int hammingDistance(int x, int y) {
        //z is the exclusive or of x and y
        int z = x ^ y;
        int ret = 0;
        for (int i=0; i<32; i++) {
            if (z >> i & 1) {
                ret++;
            }
        }
        return ret;
    }
};