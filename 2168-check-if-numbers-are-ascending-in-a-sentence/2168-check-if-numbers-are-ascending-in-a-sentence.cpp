class Solution {
public:
    bool areNumbersAscending(string s) {
        int n = INT_MIN;
        int num =0;
        int i = 0;
        while( i<s.size()){
            while(i<s.size() && (s[i]>='0'&& s[i]<='9')){
                num = num*10 + (int)(s[i]-'0');
                i++;
            }
            if(num!=0){
                cout<<num<<endl;
            if(num <= n)return false;
               else{n = num;}
            }
               num = 0;
               i++;
        }
        return true;
    }
};