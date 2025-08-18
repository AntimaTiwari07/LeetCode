class Solution {
public:
    int numTrees(int n) {
        vector<int>v(n+1);
       v[0] = 1;
       v[1] = 1;
        for(int j = 1;j<=n;j++){
           int sum = 0;
        for(int i = 1;i<=j;i++){
            sum+= (v[i-1]*v[j-i]);
        }
        v[j]= sum;
        }
        return v[n];
    }
};