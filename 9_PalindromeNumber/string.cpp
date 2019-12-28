class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        if(x == 0)
            return true;
        
        int len = 0;
        string s;
        while(x){
            s += x%10 + '0';
            len++;
            x = x / 10;
        }
        
        for(int i=0; i<=(len+1)/2; ++i){
            if(s[i] != s[len-1-i]){
                return false;
            }
        }
        return true;
    }
};