class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mySet;
        for (int i : nums) {
            if (mySet.find(i) == mySet.end()) {
                mySet.insert(i);
            } else {
                return true;
            }
        }
        return false;
    }
};