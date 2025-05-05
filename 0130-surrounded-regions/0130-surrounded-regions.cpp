class Solution {
public:
void s(vector<vector<char>>& board,int row,int col,int m,int n,vector<vector<bool>>& visited){
    if(row<0 || row>=m ||col<0||col>=n||visited[row][col]||board[row][col]=='X')return;
    visited[row][col]=true;
     //right
     s(board,row,col+1,m,n,visited);
     //down
     s(board,row+1,col,m,n,visited);
     //left
     s(board,row,col-1,m,n,visited);
     //up
     s(board,row-1,col,m,n,visited);
}
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        for(int i = 0;i<m;i++){
            if(board[i][0]!='X' && !visited[i][0])
            s(board,i,0,m,n,visited);
             if(board[i][n-1]!='X' && !visited[i][n-1])
            s(board,i,n-1,m,n,visited);
        }
         for(int i = 0;i<n;i++){
            if(board[0][i]!='X' && !visited[0][i])
            s(board,0,i,m,n,visited);
            if(board[m-1][i]!='X' && !visited[m-1][i])
            s(board,m-1,i,m,n,visited);
        }
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(!visited[i][j])board[i][j]='X';
            }
        }
    }
};