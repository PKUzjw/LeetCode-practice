class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int len = height.size();
        int l=0;
        int r=len-1;
        while(l < r){
            int minHeight = min(height[l], height[r]);
            maxArea = max(maxArea,  minHeight * (r-l));
            while(height[l] <= minHeight && l < r ) l++;
            while(height[r] <= minHeight && l < r ) r--;
        }
        return maxArea;
    }
};