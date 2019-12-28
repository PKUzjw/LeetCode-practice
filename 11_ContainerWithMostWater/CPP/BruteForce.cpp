//暴力搜索会超时
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int len = height.size();
        for(int i=0; i<len-1; ++i){
            for(int j=i+1; j<len; ++j){
                maxArea = max(min(height[i], height[j])*(j-i), maxArea);
            }
        }
        return maxArea;
    }
};