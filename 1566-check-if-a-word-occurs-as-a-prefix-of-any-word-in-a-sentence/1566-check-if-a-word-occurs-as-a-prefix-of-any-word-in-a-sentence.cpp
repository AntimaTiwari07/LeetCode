class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int countword = 1;
        int temp = 0;
        for(int i = 0;i<sentence.size();i=temp){
            string newstr = "";
            int j = i;
           while(sentence[j]!=' ' && j<sentence.size()){
             newstr+=sentence[j];
             j++;
           }
           cout<<newstr.substr(0,searchWord.size())<<endl;
           if(newstr.substr(0,searchWord.size())==searchWord){
            return countword;
           }
           if(sentence[j] == ' '){
                countword++;
             }
             temp = j+1;
        }
        return -1;
    }
};