class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int water;
        int waterMax = 0;
        while (i != j) {
            if (height[i] >= height[j]){
                water = (j-i) * height[j];
                --j;
            }
            else {
                water = (j-i) * height[i];
                ++i;
            }
            if (water > waterMax) {
                waterMax = water;
            }
        }
        return waterMax;
    }
};