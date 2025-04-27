class Solution {
public:
  void solve(vector<vector<char>>& board,string &word,vector<vector<bool>>&visited,int i,int row,int col,int m,int n,bool & ans){
    if(i==word.size()){
        ans = true;
        return;
    }
    if(row<0 || col<0 || row>=m || col>=n || visited[row][col] || board[row][col]!=word[i]) return ;
          visited[row][col]=true;
        //right
            solve(board,word,visited,i+1,row,col+1,m,n,ans);
        //left     
              solve(board,word,visited,i+1,row,col-1,m,n,ans);
        //bottom
              solve(board,word,visited,i+1,row+1,col,m,n,ans);
        //up 
              solve(board,word,visited,i+1,row-1,col,m,n,ans);         
        
         visited[row][col]=false;
  }
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        bool ans = false;
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                   solve(board,word,visited,0,i,j,m,n,ans);
            }
        }
       
        return ans;
    }
};