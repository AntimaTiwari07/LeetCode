class Solution {
public:
    char repeatedCharacter(string s) {
        int second_occ = INT_MAX;
      for(int i = 0;i<s.size();i++){
        for(int j = i+1;j<s.size();j++){
            if(s[j]==s[i]){
                second_occ = min(second_occ,j);
                break;
            }
        }
      }
      return s[second_occ];
    }
};