//fastest
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int strsLen = strs.size();
        if(strsLen == 0)
            return "";
        else if(strsLen == 1)
            return strs[0];
        else{
            string preString = strs[0];
            for(int i=1; i<strsLen; ++i){
                int index = min(preString.length(), strs[i].length());
                int len = preString.length();
                for(int j=0; j<len; j++){
                    if(preString[j] != strs[i][j] || strs[i].length() == j){
                        preString = preString.substr(0, j);
                        index = j;
                        break;
                    }
                }
                preString = preString.substr(0, index);
            }
            
            return preString;
        }
    }
};