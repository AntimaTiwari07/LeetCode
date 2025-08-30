class Solution {
public:
bool valid(vector<vector<char>>& board,int row,int col,char val){
   for(int i = 0;i<9;i++){
    if(i!=col){
        if(board[row][i]==val)return false;
    }
   }
   for(int i = 0;i<9;i++){
    if(i!=row){
        if(board[i][col]==val)return false;
    }
   }
   int startrow = (row/3)*3;
   int startcol = (col/3)*3;
   for(int i = startrow;i<startrow+3;i++){
    for(int j = startcol;j<startcol+3;j++){
        if(i!=row && j!=col){
            if(board[i][j]==val)return false;
        }
    }
   }
   return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                if(board[i][j]!='.'){
                if(!valid(board,i,j,board[i][j])) return false;
                }            
            }
        }
        return true;
    }
};