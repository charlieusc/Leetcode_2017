/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool myFunction (Interval A, Interval B) {
    return A.start < B.start;
}
class Solution {
public:

    vector<Interval> merge(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), myFunction);
        vector<Interval> ret;
        int len = intervals.size();
        if (len == 0) return ret;
        Interval temp;
        temp.start = intervals[0].start;
        temp.end = intervals[0].end;
        for (int i=1; i<len; i++) {
            if (intervals[i].start <= temp.end) {
                temp.end = max(intervals[i].end, temp.end);
            } else {
                ret.push_back(temp);
                temp.start = intervals[i].start;
                temp.end = intervals[i].end;
            }
        }
        ret.push_back(temp);
        return ret;
    }
};