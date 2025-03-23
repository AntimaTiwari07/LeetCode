class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>>v(n,vector<int>(n));
        int k = 0;
        for(int i = matrix.size()-1;i>=0;i--){
            for(int j = 0;j<matrix[i].size();j++){
                v[j][k]=matrix[i][j];
            }
            k++;
        }
        for(int i = 0;i<v.size();i++){
            for(int j = 0;j<v[i].size();j++){
                matrix[i][j]=v[i][j];
            }
        }
    }
};