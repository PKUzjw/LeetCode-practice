class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b) {
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty())
            return 0;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), cmp);
        int total = 0;
        int prev = intervals[0][1];
        for(int i=1; i<n; i++){
            if (prev > intervals[i][0]){
                total ++;
            }else {
                prev = intervals[i][1];
            }
        }
        return total;
    }
};