class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string newstr = "";
        int k = 0;
        for(int i = 0;i<s.size();i++){
            if(k<spaces.size()  && i==spaces[k] ){
                newstr+=' ';
                k++;
            }
             newstr+=s[i];
        }
        return newstr;
    }
};