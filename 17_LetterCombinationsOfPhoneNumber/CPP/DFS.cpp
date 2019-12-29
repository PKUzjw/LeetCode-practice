class Solution {
public:
    vector<string> res;
    string str[10]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    void dfs(string cur, int depth, string digits){
        if(depth == digits.length()){
            res.push_back(cur);
            return;
        }
        int num = digits[depth]-'0';
        for(int i=0; i<str[num].length(); ++i){
            dfs(cur+str[num][i], depth+1, digits);
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0)
            return res;
        
        dfs("", 0, digits);//必须先判断临界条件再进行深搜
        return res;
    }
};