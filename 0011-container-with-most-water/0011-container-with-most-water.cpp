class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxsize = INT_MIN;
        int i = 0;
        int j = n-1;
        while(i<j){
            if(height[i]<height[j]){
               maxsize = max(maxsize,height[i]*(j-i));
                i++;
            }
            else{
                 maxsize = max(maxsize,height[j]*(j-i));
                 j--;
            }
        }
     
        return maxsize;
    }
};