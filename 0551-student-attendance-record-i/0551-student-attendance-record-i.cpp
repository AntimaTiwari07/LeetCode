class Solution {
public:
    bool checkRecord(string s) {
        int countA=0;
        for(int i = 0;i<s.size();i++){
          if(s[i]=='A') countA++;
        }
        if(countA >=2){
            return false;
        }
        if(s.size()>2){
        for(int i = 0;i<s.size()-2;i++){
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
                return false;
            }
        }
        }
      return true;
    }
};