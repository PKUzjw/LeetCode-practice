//采用动态规划
//dp[i][j] = (dp[i+1][j-1] && Si == Sj)
//临界条件：dp[i][i] = true
//循环第一层是遍历子串的长度
class Solution {
public:
    string longestPalindrome(string s) {
        int len=s.size();
        if(len <= 1)
            return s;
        bool mark[len+1][len+1]; //mark[i][j]表示s[i...j]是否是回文子串
        memset(mark, 0, sizeof(mark));
        int resLeft = 0, resRight = 0; //定义最长回文子串的左右下标
        mark[0][0] = true;
        for(int i = 1; i < len; ++i){
            mark[i][i] = true;
            mark[i][i-1] = true;
        }
        
        for(int k = 2; k <= len; ++k) //枚举子串的长度
            for(int i = 0; i <= len-k; ++i){
                if(s[i] == s[i+k-1] && mark[i+1][i+k-2]){
                    mark[i][i+k-1] = true;
                    if(k > resRight - resLeft + 1){
                        resLeft = i;
                        resRight = i + k -1;
                    }
                }
            }
        return s.substr(resLeft, resRight - resLeft + 1);
    }
};