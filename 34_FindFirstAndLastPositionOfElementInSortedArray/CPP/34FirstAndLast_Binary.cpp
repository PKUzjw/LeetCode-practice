[[maybe_unused]] static const auto _ = []() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();
class Solution {
public:
    int left(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0; 
        int high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                if(mid == 0 || nums[mid] > nums[mid-1]){
                    return mid;
                }
                high = mid - 1;
            }else if(nums[mid] > target){
                high = mid - 1;
            }else{     
                low = mid + 1;
            }
        }
        return -1;
    }
    int right(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0; 
        int high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                if(mid == n-1 || nums[mid] < nums[mid+1]){
                    return mid;
                }
                low = mid + 1;
            }else if(nums[mid] > target){
                high = mid -1;
                
            }else{     
                low = mid + 1;
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int l = left(nums, target);
        int r = right(nums, target);
        res.push_back(l);
        res.push_back(r);
        return res;
    }
};