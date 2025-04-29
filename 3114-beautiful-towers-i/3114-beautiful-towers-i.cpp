class Solution {
public:
    long long maximumSumOfHeights(vector<int>& heights) {
        long long maxsum = 0;
        long long sum = 0;
        for(int i = 0;i<heights.size();i++){
            sum = heights[i];
            int temp = heights[i];
            for(int j = i-1;j>=0;j--){
                if(heights[j]<=temp){
                    sum+=heights[j];
                    temp = heights[j];
                }
                else{
                     sum+=temp;
                }
            }
            temp = heights[i];
            for(int j = i+1;j<heights.size();j++){
                if(heights[j]<=temp){
                    sum+=heights[j];
                    temp = heights[j];
                }
                else{
                     sum+=temp;
                }
            }
            maxsum = max(sum,maxsum);
        }
        return maxsum;
    }
};