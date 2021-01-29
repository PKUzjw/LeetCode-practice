[[maybe_unused]] static const auto _ = []() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
		if (nums.size() < 4) return res;
        int n=nums.size();
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size()-3; ++i) {
            if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target) break;
            if(nums[i]+nums[n-1]+nums[n-2]+nums[n-3]<target) continue;
			for (int j = i + 1; j < nums.size()-2; ++j) {
                if(nums[i]+nums[j]+nums[j+1]+nums[j+2]>target) break;
                if(nums[i]+nums[j]+nums[n-1]+nums[n-2]<target) continue;
				int target2 = target - nums[i] - nums[j];
				int l = j + 1, r = nums.size() - 1;
				while (l < r) {
					int left = nums[l];
					int right = nums[r];
					if (nums[l] + nums[r] > target2) {
						while (l < r&&nums[r] == right) --r;
					}
					else if (nums[l] + nums[r] < target2) {
						while (l < r&&nums[l] == left) ++l;
					}
					else {
						res.push_back(vector<int>{nums[i], nums[j], nums[l], nums[r]});
						while (l < r&&nums[l] == left) ++l;
						while (l < r&&nums[r] == right) --r;
					}
				}
				while (j + 1 < nums.size() && nums[j + 1] == nums[j]) ++j;
			}
			while (i + 1 < nums.size() && nums[i + 1] == nums[i]) ++i;
		}
		return res;
    }
};