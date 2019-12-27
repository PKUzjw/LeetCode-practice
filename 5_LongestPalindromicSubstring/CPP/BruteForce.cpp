//会超时
class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size();
        int resLeft = 0;
        int resRight = 0;
        int maxSubLen = 0;
        for(int i=0; i<len; ++i){
            for(int j=i; j<len; ++j){
                if(isPalindromic(s.substr(i, j-i+1))){
                    if(maxSubLen < j-i+1){
                        maxSubLen = j-i+1;
                        resLeft = i;
                        resRight = j;
                    }
                }
            }
        }
        return s.substr(resLeft, maxSubLen);
    }

    bool isPalindromic(string substr){
        int subLen = substr.size();
        for(int i = 0; i < (subLen+1)/2; ++i){
            if(substr[i] != substr[subLen-1-i]){
                return false;
            }
        }
        return true;
    }
};