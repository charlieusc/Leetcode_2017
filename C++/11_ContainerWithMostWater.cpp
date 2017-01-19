class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int left = 0, right = height.size()-1;
        while (left < right) {
            int h = min(height[left], height[right]);
            water = max(water, (right - left) * h);
            while (h >= height[left] && left < right) left++;
            while (h >= height[right] && left < right) right--;
        }
        return water;
    }
};