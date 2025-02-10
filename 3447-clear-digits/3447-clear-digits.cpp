class Solution {
public:
    string clearDigits(string s) {
        for(int i = 0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                for(int j = i;j>=0;j--){
                   if(s[j]>='a' && s[j]<='z'){
                    s.erase(s.begin()+j);
                    break;
                   }
                }
                s.erase(s.begin()+(i-1));
                i-=2;
            }
        }
        return s;
    }
};