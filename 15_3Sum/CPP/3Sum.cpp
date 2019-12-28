//did not pass, I don't konw why
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> res;
//         for(int i=0; i<nums.size(); i++){
//             if(i == 0 || (i>0 && nums[i] != nums[i-1])){
//                 int left = i+1;
//                 int right = nums.size() - 1;
//                 int sum = - nums[i];
//                 while(left < right){
//                     if((nums[left]+nums[right]) == sum){
//                         res.push_back(vector<int>({nums[i], nums[left], nums[right]}));
//                         while(nums[left] == nums[left+1] && left < right) left++;
//                         while(nums[right-1] == nums[right] && left < right) right--;
//                         left++;
//                         right--;
//                     }else if(nums[left]+nums[right] > sum){
//                         right --;
//                     }else{
//                         left ++;
//                     }
//                 }
//             }
//         }
//         return res;
//     }
// };

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++){
            if( i==0 || (i > 0 && nums[i] != nums[i-1]) ){
                int low = i+1; int high = nums.size()-1;
                //high变量不用担心，最后肯定会转成有符号数
                int sum = - nums[i];
                while(low < high){
                    if( (nums[low]+nums[high]) == sum){
                        res.push_back(vector<int>({nums[i], nums[low], nums[high]}));
                        while( low < high && nums[low] == nums[low+1] ) low++;
                        while( low < high && nums[high] == nums[high-1] ) high--;
                        low++; high--;                        
                    }else if(nums[low]+nums[high] < sum) low++;
                    else high--;
                }
            }
        }
        return res;
    }
};