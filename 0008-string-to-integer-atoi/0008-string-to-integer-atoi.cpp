class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        long num = 0;
        int sign=1 ;
        bool valid = false;
        //whitespace
        while(i<s.size() && s[i]==' '){i++;}
        //sign
             if(i<s.size() &&(s[i]=='+' || s[i]=='-')){
                sign = (s[i]=='-')?-1:1;
                i++;
             }
           //numbers
                while(i<s.size() && (s[i]>='0' && s[i]<='9')){
                    if(num > (INT_MAX - (s[i]-'0'))/10){
                      return (sign == 1) ? INT_MAX : INT_MIN;
                    }
                   num = num*10+(int)(s[i]-'0');     
                    i++;
                }
        
        return num*sign;
    }
};