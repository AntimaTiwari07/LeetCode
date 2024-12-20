class Solution {
public:
    char repeatedCharacter(string s) {
      set<char>ch;
      int idx = -1;
      for(int i = 0;i<s.size();i++){
        if(ch.find(s[i])!=ch.end()){
            idx = i;
            break;
        }
        else{
            ch.insert(s[i]);
        }
      }
      return s[idx]; 
    }
};