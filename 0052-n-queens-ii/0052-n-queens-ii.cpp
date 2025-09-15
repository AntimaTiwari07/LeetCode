class Solution {
public:

bool safe(vector<string>&board,int row,int col,int &n){
    for(int i = 0;i<n;i++){
        if(board[row][i]=='Q')return false;
    }

    for(int i = 0;i<n;i++){
        if(board[i][col]=='Q')return false;
    }
  

    int x = row;
    int y = col;
    while(x>=0 && y>=0){
        if(board[x][y]=='Q')return false;
        x-=1;
        y-=1;
    }

    x = row;
    y = col;
    while(x>=0 && y<n){
        if(board[x][y]=='Q')return false;
        x-=1;
        y+=1;
    }
    return true;
}
void solve(vector<string>&board,int row,int &n,int &count){
    if(row==n){
        count+=1;
        return;
    }

    for(int j = 0;j<n;j++){
        if(safe(board,row,j,n)){
            board[row][j] = 'Q';
            solve(board,row+1,n,count);
            board[row][j]='.';
        }
    }
}
    int totalNQueens(int n) {
        int count = 0;
        vector<string>board(n,string(n,'.'));
        solve(board,0,n,count);
        return count;
    }
};