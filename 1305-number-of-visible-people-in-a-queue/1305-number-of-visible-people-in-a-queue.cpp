class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
       stack<int>st;
       int n = heights.size();
       vector<int>ans(n);
       ans[n-1]=0;
       for(int i = n-1;i>=0;i--){
        int count = 0;
        while( !st.empty() && st.top()<heights[i]){
            count+=1;
            st.pop();
        }
        if(!st.empty()) ans[i] = count+1;
        else ans[i]=count;

        st.push(heights[i]);
       }
       return ans;
    }
};