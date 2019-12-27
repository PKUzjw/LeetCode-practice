class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        long long max = INT_MAX;//((long long)1 << 31) - 1;
        long long min = INT_MIN;//0 - (1 << 31);
        while(x){
            res = res*10 + x%10;
            x = x/10;
        }
        return res< min || res > max ? 0 : res;
    }
};
