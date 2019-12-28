class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        if(x == 0)
            return true;
        
        long res=0;
        long tmp =  x;
        while(x){
            res = res*10 + x % 10;
            x /= 10;
        }
       return res == tmp;
    }
};