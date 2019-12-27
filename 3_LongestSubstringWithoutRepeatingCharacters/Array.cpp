//是Hashmap的精简版，用一个256位大小的数组代替Hashmap
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(256, -1);
        int res = 0;
        int left = -1;
        for (int i=0; i<s.size(); ++i){
            left = max(left, m[s[i]]);
            m[s[i]] = i;
            res = max(res, i-left);
        }
        return res;
    }
};
