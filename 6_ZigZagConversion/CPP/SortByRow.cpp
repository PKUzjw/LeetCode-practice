class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        bool pos = false; //判断向下还是向上，true向上，false向下
        vector<string> rows(min(int(s.size()), numRows));
        
        int curRow = 0;
        for(char c : s){
            rows[curRow] += c;
            if(curRow == 0 || curRow == numRows-1){
                pos = !pos;
            }
            curRow += pos ? 1 : -1;
        }
        
        string res;
        
        for(string row : rows) res += row;
        return res;
    }
};