//用HashSet,把出现过的字符放入HashSet中，遇到HashSet中没有的字符则加入HashSet中并更新结果res，如果遇到重复的，则从左边开始删字符，直到删到重复的字符为止
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        int left = 0;
        int length = s.size();
        int i=0;
        set<char> t;
        while (i<length) {
            if (!t.count(s[i])) {
                t.insert(s[i++]);
                res = max(res, (int)t.size());
            } else {
                t.erase(s[left++]);
            }
        }
        return res;
    }
};