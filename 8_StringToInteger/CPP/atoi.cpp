class Solution {
public:
    int myAtoi(string str) {
        int sign = 1;
        int i = 0; 
        long num = 0;
        
        while(isspace(str[i]))
            i++;
        
        if(str[i] == '-' || str[i] == '+'){
            if(str[i++] == '-')
                sign = -1;
        }
        
        while(str[i] == '0')
            i++;
        
        while(isdigit(str[i])){
            num = num*10 + str[i] - '0';
            i++;
            if(num > INT_MAX)
                break;
        }
        num = num*sign;
        if(num > INT_MAX) return INT_MAX;
        if(num < INT_MIN) return INT_MIN;
        
        return num;
    }
};