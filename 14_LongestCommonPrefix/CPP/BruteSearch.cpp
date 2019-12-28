class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        if(strs.size() == 0)
            return res;
        int len = strs[0].length();
        int index = 0;
        for(int i=0; i<len; ++i){
            char curChar = strs[0][index];
            for(string str:strs){
                if(str[index] != curChar || str.length() == i){
                    return strs[0].substr(0, index);
                }
            }
            index ++;
        }
        return strs[0].substr(0, index);
    }
};