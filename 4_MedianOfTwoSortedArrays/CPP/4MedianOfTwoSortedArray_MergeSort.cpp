//先合并，再排序，时间复杂度O((m+n)log(m+n))，不满足要求
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> myvec(nums1.size() + nums2.size());
        int t=0,i,j;
        for(i = 0;i < nums1.size(); i++){
            myvec[t] = nums1[i];
            t++;
        }
        for(j = 0; j < nums2.size(); j++){
            myvec[t] = nums2[j];
            t++;
        }
        sort(myvec.begin(), myvec.end());
        i = t/2;
        if(t % 2 == 0){
            j = i-1;
        }else {
            j = i;
        }
        return (myvec[i] + myvec[j]) / 2.0;
    }
};
