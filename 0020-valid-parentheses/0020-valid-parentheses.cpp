class Solution {
public:
    bool isValid(string s) {
        if(s.size()==1)return false;
      stack<char>st;
      for(int i = 0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else{
            if(!st.empty() && (s[i]==')'&& st.top()=='(')){
                st.pop();
            }
            else if(!st.empty() && (s[i]=='}'&& st.top()=='{')){
                st.pop();
            }
            else if(!st.empty() && (s[i]==']'&& st.top()=='[')){
                    st.pop();
            }
            else{
                return false;
            }
        }
      }
      if(st.size()==0)return true;
      return false;  

    }
};