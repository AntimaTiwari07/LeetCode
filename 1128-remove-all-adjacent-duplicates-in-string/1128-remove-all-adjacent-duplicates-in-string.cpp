class Solution {
public:
    string removeDuplicates(string s) {
         string ans = "";
       stack<char>st;
       if(!s.empty()){
        st.push(s[0]);
       for(int i  = 1;i<s.size();i++){
        if(!st.empty() && s[i]==st.top()){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
       }
      
       while(!st.empty()){
        ans+=st.top();
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       }
       return ans;

    }
};