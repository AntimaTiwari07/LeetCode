class Solution {
public:
    string removeDuplicateLetters(string s) {
      vector<bool>vis(26,false);
      vector<int>idx(26,-1);
      for(int i = 0;i<s.size();i++){
        idx[s[i]-'a'] = i;
      }
      stack<char>st;
      for(int i = 0;i<s.size();i++){
        if(!vis[s[i]-'a']){
            while(!st.empty() && (st.top()-'a'>s[i]-'a' && idx[st.top()-'a']>i)){
                // cout<<"pop = "<<st.top()<<" ";
               vis[st.top()-'a'] = false;
                st.pop();
            }
            //cout<<endl;
            // cout<<"insert = "<<s[i]<<endl;
            vis[s[i]-'a'] = true;
            st.push(s[i]);
        }
      }
      string ans = "";
      while(!st.empty()){
        ans += st.top();
        st.pop();
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};