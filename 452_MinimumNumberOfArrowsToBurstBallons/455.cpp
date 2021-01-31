class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b){
        return a[1] < b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty())
            return 0;
        sort(points.begin(), points.end(), cmp);
        int result = 1;
        int num = points.size();
        int pos = points[0][1];
        for(int i=1; i<num; i++){
            if (points[i][0] > pos){
                pos = points[i][1];
                result +=1 ;
            }
        }
        return result;
    }
};