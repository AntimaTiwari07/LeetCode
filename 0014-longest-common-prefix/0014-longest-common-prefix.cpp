class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string newstr = "";
        bool valid = true;
        for(int i = 0;i<strs[0].size();i++){
            valid = true;
            for(int j = 0;j<strs.size()-1;j++){
                if(strs[j][i]!=strs[j+1][i]){
                    valid = false;
                       break;
                }
            }
            if(valid) newstr+=strs[0][i]; 
            else break;
        }
        return newstr;
    }
};