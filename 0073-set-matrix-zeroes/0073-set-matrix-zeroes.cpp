class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>row;
        set<int>col;
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
               if(row.find(i)==row.end())row.insert(i);
               if(col.find(j)==col.end())col.insert(j);
                } 
            }
        }
        vector<int>roww(row.begin(),row.end());
        vector<int>column(col.begin(),col.end());
        for(int i = 0;i<roww.size();i++){
            for(int j = 0;j<matrix[i].size();j++){
                matrix[roww[i]][j]=0;
            }
        }
        for(int i = 0;i<column.size();i++){
            for(int j = 0;j<matrix.size();j++){
                matrix[j][column[i]]=0;
            }
        }
    }
};