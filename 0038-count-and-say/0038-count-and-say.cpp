class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
         for(int i = 1;i<n;i++){
              string temp = "";
    for(int k = 0;k<s.size();k++){
       char ch = s[k];
       int j = k;
       int count = 0;
       while(j<s.size() && s[j]==ch){
        count+=1;
        j++;
       }
       k = j-1;
       temp = temp+ to_string(count)+ch;
    }
    s = temp;
         }

     return s;
    }
};