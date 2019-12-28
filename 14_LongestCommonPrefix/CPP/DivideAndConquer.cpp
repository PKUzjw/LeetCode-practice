class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        if(strs.size() == 0)
            return "";
        else if(strs.size() == 1)
            return strs[0];
        else{
            int half = strs.size() / 2;
            vector<string> preHalf(strs.begin(), strs.begin() + half);
            vector<string> latHalf(strs.begin() + half, strs.end());
            string pre = longestCommonPrefix(preHalf);
            string lat = longestCommonPrefix(latHalf);
            int i = 0;
            int len = min(pre.length(), lat.length());
            for(i=0; i<len; ++i){
                if(pre[i] != lat[i]){
                    return pre.substr(0, i);
                }
            }
            return pre.substr(0, i);
        }
    }
};