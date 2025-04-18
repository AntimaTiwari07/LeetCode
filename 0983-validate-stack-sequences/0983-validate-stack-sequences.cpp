class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
     stack<int>st;
     int i= 0;
     int j = 0;
     while(i<pushed.size() && j<popped.size()){
        while(!st.empty() && st.top()==popped[j]){
            st.pop();
            j++;
        }
        st.push(pushed[i]);
        i++;
     }
     if(i==pushed.size()){
         while(!st.empty() && st.top()==popped[j]){
            st.pop();
            j++;
        }
        if(st.empty())return true;
     }
     return false;

    }
};