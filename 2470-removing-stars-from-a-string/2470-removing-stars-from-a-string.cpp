class Solution {
public:
    string removeStars(string s) {
        string str="";
        for(int i = 0;i<s.size();i++){
         if(s[i]!='*'){
            str+=s[i];
         }    
         else{
            str.erase(str.begin()+str.size()-1);
         } 
        }
        return str;
    }
};