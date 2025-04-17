class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n  = nums.size();
        vector<int>ans(n);
        stack<int>st;
        int maxnum = INT_MIN;
        int idx = -1;
        for(int i = 0;i<n;i++){
            if(nums[i]>maxnum){
                maxnum = nums[i];
                idx = i;
            }
        }
        st.push(maxnum);
        ans[idx]= -1;
        int i = (idx-1+n)%n;
       while(i!=idx){
        while(!st.empty() && st.top()<=nums[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]= -1;
        }
        else{
            ans[i]= st.top();
        }
        st.push(nums[i]);
        i = (i-1+n)%n;
       }
       return ans;
    }
};