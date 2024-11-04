class Solution {
public:
    string compressedString(string word) {
    if(word.empty()) return "";
    string comp ;
    comp.reserve(word.size());
      int count = 1;
      for(int i = 0;i<word.size()-1;i++){
        if(word[i]!=word[i+1] || count==9){
            comp +=to_string(count)+word[i];
            count = 1;
      }
      else{
        count++;
      }
      }
        comp = comp+to_string(count)+word.back();
      return comp;
    }
};