class Solution {
public:
    int romanToInt(string s) {
        // char str1[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
        // vector<char> roman(str1, str1+7);
        // int num1[] = {1000, 500, 100, 50, 10, 5, 1};
        // vector<int> num(num1, num1+7);
        vector<char> roman = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
        vector<int> num = {1000, 500, 100, 50, 10, 5, 1};
        int len=s.size();
        map<char, int> m;
        for(int i=0; i<roman.size(); ++i){
            m[roman[i]]=num[i];
        }
        int res=0;
        for(int i=0; i<len; ++i){
            if(m[s[i]] < m[s[i+1]]){
                res += m[s[i+1]] - m[s[i]];
                ++i;
            }else{
                res += m[s[i]];
            }
        }
        return res;
    }
};