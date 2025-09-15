class Solution {
public:
bool safe(vector<string>&v,int row,int col,int &size){
    //row marked
     for(int i = 0;i<size;i++){
        if(v[i][col]=='Q')return false;
     }
     //col marked
     for(int i  =0;i<size;i++){
        if(v[row][i]=='Q')return false;
     }

     //right up diagonal
     int x = row;
    int y = col;
     while(x>=0 && y<size){
        if(v[x][y]=='Q')return false;
        x-=1;
        y+=1;
     }

     //left up diagonal
     x = row;
     y = col;
     while(x>=0 && y>=0){ 
         if(v[x][y]=='Q')return false;
        x-=1;
        y-=1;
     }

     return true;
}


void solve(vector<string>&v,int &n,int row,vector<vector<string>>&ans){
if(row==n){
    ans.push_back(v);
    return;
}
    for(int i = 0;i<n;i++){
        if(safe(v,row,i,n)){
            v[row][i]='Q';
            solve(v,n,row+1,ans);
            v[row][i]='.'; //backtrack step
        }
    }
}

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>v(n,string(n,'.'));
      solve(v,n,0,ans);
      return ans;
    }
};