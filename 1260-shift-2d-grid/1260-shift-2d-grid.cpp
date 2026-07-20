class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>v;
        for(int i= 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                v.push_back(grid[i][j]);
            }
        }
        vector<vector<int>>ans(grid.size(),vector<int>(grid[0].size()));
        int x = (grid[0].size()*grid.size());
        int rem = k%x;
        int t = x-rem;
        int i = 0;
        int j = 0;
        int cnt = 0;
        while(cnt<rem){
          if(j==grid[0].size()){
            j = 0;
            i++;
          }
          ans[i][j] = v[t+cnt];
          cnt++;
          j++;
        }
        int idx = 0;
        while(idx<t){
          if(j==grid[0].size()){
            j = 0;
            i++;
          }
          ans[i][j] = v[idx];
          idx++;
          j++;
        }
        
return ans;
    }
};