class Solution {
public:
    int possibleStringCount(string word) {
        int count = 0;
     for(int i = 1;i<word.size();i++){
        if(word[i]==word[i-1]){
            count+=1;
            word.erase(word.begin()+i);
            i--;
        }
     }
     return count+1;
    }
};