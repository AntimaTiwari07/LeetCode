class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1); //baee case
        int maxlen = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(!st.empty()){
                    maxlen = max(maxlen,i-st.top());
                }
                else{
                    st.push(i);
                }
            }
        }
return maxlen;
    }
};