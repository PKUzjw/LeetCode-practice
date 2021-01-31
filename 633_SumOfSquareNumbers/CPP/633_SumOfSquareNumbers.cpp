class Solution {
public:
    bool judgeSquareSum(int c) {
        unsigned int l = 0;
        unsigned int r = sqrt(c);
        while(l < r){
            if (l*l + r*r > c) r--;
            else if (l*l + r*r < c) l++;
            else return true;
        }
        return l * l + r * r == c;
    }
};