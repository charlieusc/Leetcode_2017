class Solution {
public:
    int bits(int n) {
        int ret = 0;
        for (int i=0; i<6; i++) {
            if (n >> i & 1) {
                ret++;
            }
        }
        return ret;
    }
    string time(int h, int s) {
        string ret = to_string(h) + ":";
        if (s < 10) {
            ret += "0" + to_string(s);
        } else {
            ret += to_string(s);
        }
        return ret;
    }
    vector<string> readBinaryWatch(int num) {
        vector<string> ret;
        for (int i=0; i<12; i++) {
            int h = bits(i);
            if (h <= num) {
                for (int j=0; j<60; j++) {
                    int s = bits(j);
                    if (h + s == num) {
                        ret.push_back(time(i, j));
                    }
                }
            }
        }
        return ret;
    }
};