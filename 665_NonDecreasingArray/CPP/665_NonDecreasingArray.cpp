class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int size=nums.size();
        if(size==1){
            return true;
        }
        //一般处理
        int count=0;
        for(int i=1;i<size;i++){
            if(nums[i-1]>nums[i]){
                count++; //记录逆序数数量
            }
            if(count>1){ //判断
                return false;
            }
            if(i>1&&i<size-1&&nums[i+1]<nums[i-1]&&nums[i-2]>nums[i]){
                return false;
            }
        }
        return true;
    }
};