//双向指针，遍历，直到重合，O(n)
//让指向两边中最短边的指针向内移动，如此新的面积才可能更大
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int len = height.size();
        int l=0;
        int r=len-1;
        while(l < r){
            maxArea = max(maxArea, min(height[l], height[r]) * (r-l));
            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return maxArea;
    }
};