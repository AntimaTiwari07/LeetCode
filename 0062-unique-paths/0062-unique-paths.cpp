class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>v(m,vector<int>(n,0));
        v[0][0] = 1;
        int up = 0,left = 0;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(i-1>=0)up = v[i-1][j];
                if(j-1>=0)left = v[i][j-1];
                v[i][j] = v[i][j]+left+up;
                up = 0;left = 0;
            }
        }
        return v[m-1][n-1];
    }
};