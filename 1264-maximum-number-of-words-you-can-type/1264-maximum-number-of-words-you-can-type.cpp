class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<int>map(26,0);
        for(int i = 0;i<brokenLetters.size();i++){
            map[brokenLetters[i]-'a']++;
        }
          bool valid = true;
          int cnt = 0;
        for(int i = 0;i<text.size();i++){
            if(text[i]==' '){
              if(valid)cnt+=1;
              valid = true;
            }
            else{
            if(map[text[i]-'a']==1){
                int j = i;
                valid = false;
                while(j<text.size() && text[j]!=' '){
                    j++;
                }
                i = j-1;
            }
            }
        }
        if(valid)cnt+=1;
        return cnt;
    }
};