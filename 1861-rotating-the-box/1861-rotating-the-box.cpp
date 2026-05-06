class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        vector<vector<char>>ans(boxGrid[0].size(),vector<char>(boxGrid.size(),'.'));
        int m = boxGrid.size();
        int n = boxGrid[0].size();
        for(int i = m-1;i>=0;i--){
            queue<pair<int,int>>q;
            for(int j = n-1;j>=0;j--){
              if(boxGrid[i][j]=='.'){
                q.push({i,j});
              }
              else if(boxGrid[i][j]=='#' && !q.empty()){
                  pair<int,int>p = q.front();
                  boxGrid[p.first][p.second] = '#';
                  boxGrid[i][j] = '.';
                  q.pop();
                   q.push({i,j});
              }
              else{
                while(!q.empty()){
                    q.pop();
                }
              }
            }
        }

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                
                ans[i][j] = boxGrid[m-1-j][i];
            }
        }
        return ans;
    }
};