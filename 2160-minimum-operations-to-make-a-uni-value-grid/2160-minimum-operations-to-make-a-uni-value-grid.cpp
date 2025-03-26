class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>v;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int cnt =0;
       int target = v[v.size()/2];
      
int temp =0;
       for(int i = 0;i<v.size();i++){
       if(v[i]!=target){
        if((abs(v[i]-target)%x)!=0)return -1;
        cnt+=(abs(v[i]-target)/x);
       }
       }
       return cnt;
    }
};