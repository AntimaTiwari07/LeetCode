class Solution {
public:
bool issafe(char val,vector<vector<char>>& board,int row,int col){
    for(int i = 0;i<9;i++){
        if(board[row][i]==val)return false;
    }
    for(int i = 0;i<9;i++){
        if(board[i][col]==val)return false;
    }
    int startrow = (row/3)*3;
    int startcol = (col/3)*3;
    for(int i = startrow;i<startrow+3;i++){
        for(int j = startcol;j<startcol+3;j++){
            if(board[i][j]==val)return false;
        }
    }
    return true;
}

bool helper(vector<vector<char>>& board,int row,int col){

    if(row==9){
        return true;
    }

   int nextrow = row;
   int nextcol = col+1;
   if(nextcol==9){
    nextrow = row+1;
    nextcol = 0;
   }

    if(board[row][col]!='.'){
        return helper(board,nextrow,nextcol);
    }

    for(int dig = 1;dig<=9;dig++){
        if(issafe((char)(dig+'0'),board,row,col)){
            board[row][col] = (char)(dig+'0');
            if(helper(board,nextrow,nextcol)){
              return true;
            }
            board[row][col] = '.';
        }
    }
    return false;  
}
    void solveSudoku(vector<vector<char>>& board) {
        int row = 0;
        int col = 0;
      helper(board,row,col);
        
    }
};