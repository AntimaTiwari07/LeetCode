class Solution {
public:
    int numTrees(int n) {
        vector<int>ans(n+1,1);
        for(int i = 2;i<=n;i++){
            int cnt = 0;
            for(int j = 1;j<=i;j++){
                cnt+=ans[j-1]*ans[i-j];
            }
            ans[i] = cnt;
        }
       return ans[n];
    }
};