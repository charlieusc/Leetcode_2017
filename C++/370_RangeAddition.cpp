class Solution {
public:
    vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
        vector<int> ret(length, 0);
        for (int i=0; i<updates.size(); i++) {
            int s = updates[i][0], e = updates[i][1]+1, u = updates[i][2];
            ret[s] += u;
            if(e < ret.size()) {
                ret[e] -= u;
            }
        }
        int inc = 0;
        for (int i=0; i<ret.size(); i++) {
            inc += ret[i];
            ret[i] = inc;
        }
        
        return ret;
    }
};