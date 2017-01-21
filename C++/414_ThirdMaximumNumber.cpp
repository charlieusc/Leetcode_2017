class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> mySet;
        for (int i=0; i<nums.size(); i++) {
            mySet.insert(nums[i]);
            if (mySet.size() > 3) {
                mySet.erase(mySet.begin());
            }
        }
        if (mySet.size() == 3) {
            return *mySet.begin();
        } else {
            return *mySet.rbegin();
        }
    }
};