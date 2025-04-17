class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //nums2 ke element ke liye map karenge next greater element
        unordered_map<int,int>mp;
        stack<int>st;
        int n = nums2.size();
         for(int i =n-1 ;i>=0;i--){
            //check whether stack have small elemnt then nums2[i]
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            //is stack is empty
            if(st.empty()){
                mp[nums2[i]]=-1;
                }
            else{
                mp[nums2[i]]=st.top();
            }
            //push nums[i] for left element
            st.push(nums2[i]);
         }
         vector<int>ans;
         int  m = nums1.size();
       for(int i = 0;i<m;i++){
           ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};