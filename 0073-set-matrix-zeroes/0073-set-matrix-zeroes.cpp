class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>x;
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    x.push_back({i,j});
                }
            }
        }
        for(int i = 0;i<x.size();i++){
            int row = x[i][0];
            int col = x[i][1];
            for(int k = 0;k<matrix[0].size();k++){
                matrix[row][k]=0;
            }
             for(int k = 0;k<matrix.size();k++){
                matrix[k][col]=0;
            }
        }
    }
};