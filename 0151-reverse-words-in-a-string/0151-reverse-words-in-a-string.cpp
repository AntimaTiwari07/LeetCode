class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        vector<string>v;
      for(int i = 0;i<s.size();i++){
        string newstr ="";
        int j = i;
        while(j<s.size()&&s[j]!=' '){
            newstr+=s[j];
            j++;
        }
       if(newstr!="") v.push_back(newstr);
         i = j;
      }
      for(int i = 0;i<v.size()/2;i++){
        swap(v[i],v[v.size()-1-i]);
      }  
      for(int i = 0;i<v.size();i++){
        if(i==v.size()-1)ans+=v[i];
        else ans = ans+v[i]+" ";
      }
      return ans;
    }
};