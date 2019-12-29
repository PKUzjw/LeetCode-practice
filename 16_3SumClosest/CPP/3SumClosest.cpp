class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans;
        int diff = INT_MAX;
        int len = nums.size();
        for(int i=0; i<len-2; i++){
            // if(i = 0 || (i>0 && nums[i] != nums[i-1])){
            int low = i+1;
            int high = len - 1;
            while(low < high){
                int sum = nums[low] + nums[high] + nums[i];
                int tmpDiff = abs(sum-target);
                if(tmpDiff < diff){
                    ans = sum;
                    diff = tmpDiff;
                }
                if(sum < target)
                    low++;
                else if(sum > target)
                    high--;
                else 
                    return sum;
            }
            // }
        }
        return ans;
    }
};