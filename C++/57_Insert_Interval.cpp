/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
bool myFunction(Interval A, Interval B) {
    return A.start < B.start;
}

class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        intervals.push_back(newInterval);
        vector<Interval> ret;
        sort(intervals.begin(), intervals.end(), myFunction);
        Interval temp;
        temp.start = intervals[0].start;
        temp.end = intervals[0].end;
        for (int i=0; i<intervals.size(); i++) {
            if (intervals[i].start <= temp.end) {
                temp.end = max(temp.end, intervals[i].end);
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