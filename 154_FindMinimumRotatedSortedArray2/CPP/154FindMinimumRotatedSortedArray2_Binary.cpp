[[maybe_unused]] static const auto _ = []() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        int target = INT_MAX;
        while(start < end){
            int mid = start + (end-start) / 2;
            if (nums[mid] > nums[end]){
                start = mid + 1;
            }else if(nums[mid] < nums[end]){
                end = mid;
            }else{
                end --;
            }
        }
        return nums[end];
    }
};