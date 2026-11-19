class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
      int sum = 0;
      int ans = INT_MIN;
      for(int i = 0;i<cardPoints.size();i++){
        sum+=cardPoints[i];
      }
      int n = cardPoints.size();
      int x = 0;
      for(int i = 0;i<n-k;i++){
        x+=cardPoints[i];
      }
      ans = max(ans,sum-x);
      for(int i = n-k;i<n;i++){
        x-=cardPoints[i-n+k];
        x+=cardPoints[i];
        ans = max(ans,sum-x);
      }
      return ans;
    }
};