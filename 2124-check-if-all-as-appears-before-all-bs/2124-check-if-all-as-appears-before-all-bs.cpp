class Solution {
public:
    bool checkString(string s) {
        int idx = -1;
        for(int i = 0;i<s.size();i++){
          if(s[i]=='b'){
            idx = i;
            break;
          }
        }
        while(idx!=-1 && idx<s.size()){
            if(s[idx]=='a')return false;
            idx++;
        }
return true;
    }
};