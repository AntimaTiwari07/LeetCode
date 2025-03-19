class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        string str = "";
        for(int i = 0;i<n/2;i++){
            str = str+s[i];
            if(n%str.size()==0){
                string newstr ="";
                for(int j = 0;j<n/str.size();j++){
                    newstr+=str;
                }
                if(newstr==s)return true;
            }
        }
        return false;
    }
};