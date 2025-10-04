class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j = height.size()-1;
        int ans = INT_MIN;
         while(i<height.size() && j>=0 &&  i!=j){
           ans = max(min(height[i],height[j])*(j-i),ans);
           if(height[i]<=height[j]) i++;
           else j--;
         }
         return ans;
    }
};