class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int j = 0;
        int count = 0;
        for(int i = 0;i<str1.size() && j<str2.size();i++){
            if(str1[i]=='z'){
              if('z'==str2[j] || 'a'==str2[j]){
            count++;
            j++;
           }  
            }
           else if(str1[i]==str2[j] || (str1[i]+1)==str2[j]){
            count++;
            j++;
           }
        }
        if( count==str2.size()){
            return true;
        }
        return false;
    }
};