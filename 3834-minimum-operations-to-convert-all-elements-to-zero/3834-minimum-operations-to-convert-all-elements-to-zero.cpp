class Solution {
public:
    int minOperations(vector<int>& nums) {
    vector<bool>seen(100001,false);
     stack<int>st;
     int ans = 0;
        for(int i = 0;i<nums.size();i++){
               //if number is greater then pop from stack
              while(!st.empty() && st.top()>nums[i]){
                seen[st.top()]=false;
                st.pop();
              }
             
              //if element not seen in stack then add in ans
            if(nums[i]!=0)st.push(nums[i]);

             if(!st.empty() && !seen[nums[i]]){ans+=1;
              seen[st.top()]=true;}
        }
        return ans;
    }
};