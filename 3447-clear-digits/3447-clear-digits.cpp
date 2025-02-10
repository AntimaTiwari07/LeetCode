class Solution {
public:
    string clearDigits(string s) {
        for(int i = 0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                int j = i-1;
               while(j>=0){
                   if(s[j]>='a' && s[j]<='z'){
                    s.erase(s.begin()+j);
                    break;
                   }
                   j--;
                }
                s.erase(s.begin()+(i-1));
                i-=2;
            }
        }
        return s;
    }
};