class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int countword = 1;
        int temp = 0;
        int j = -1;
        for(int i = 0;i<sentence.size();i=j+1){
            string newstr = "";
            j = i;
           while(sentence[j]!=' ' && j<sentence.size()){
             newstr+=sentence[j];
             j++;
           }
           if(newstr.substr(0,searchWord.size())==searchWord){
            return countword;
           }
           if(sentence[j] == ' '){
                countword++;
             }
        }
        return -1;
    }
};