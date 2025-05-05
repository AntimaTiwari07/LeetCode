class Solution {
public:
void solve(vector<vector<char>>& grid,int row,int col,int m,int n,vector<vector<bool>>& visited ,int &count,vector<vector<bool>>& one){
    if(row<0 || row>=m || col<0 || col>=n || grid[row][col]=='0' || visited[row][col] ){return;}
    visited[row][col]= true;
    one[row][col]= true;
    count+=1;
    //move right
    solve(grid,row,col+1,m,n,visited,count,one);
    //move down
    solve(grid,row+1,col,m,n,visited,count,one);
    //move left
    solve(grid,row,col-1,m,n,visited,count,one);
    //move up
    solve(grid,row-1,col,m,n,visited,count,one);

}
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>>visited(m,vector<bool>(n,false));
         vector<vector<bool>>one(m,vector<bool>(n,false));
        int count = 0;
        int ans = 0;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                count = 0;
                if(!one[i][j] && grid[i][j]!='0'){
                solve(grid,i,j,m,n,visited,count,one);
                if(count!=0){ans+=1;}
                }
            }
        }
        return ans;
    }
};