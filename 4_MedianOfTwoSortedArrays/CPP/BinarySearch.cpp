class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int M = nums1.size();
        int N = nums2.size();
        if (M > N) return findMedianSortedArrays(nums2, nums1);
        int L = M + N;
        int k = L / 2; //总共左边需要多少个元素
        
    }
};