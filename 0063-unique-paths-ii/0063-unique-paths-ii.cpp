class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>>v(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),1));
        for(int i  =0;i<obstacleGrid.size();i++){
            
            for(int j = 0;j<obstacleGrid[i].size();j++){
                int up = 0;
            int left = 0;
                 if(obstacleGrid[i][j]==1) v[i][j]=0;
                else {if(i-1>=0 && obstacleGrid[i-1][j]!=1)up = v[i-1][j];
                if(j-1>=0 && obstacleGrid[i][j-1]!=1)left = v[i][j-1];
                
                 if(i==0 && j==0)v[i][j]=1;
               else  v[i][j] = up+left;
                }
               cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        return v[obstacleGrid.size()-1][obstacleGrid[0].size()-1];
    }
};