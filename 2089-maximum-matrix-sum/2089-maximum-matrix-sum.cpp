class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
       long long totalsum = 0;
       int countneg = 0;
       int minvalue = INT_MAX;
       for(int i = 0;i<matrix.size();i++){
        for(int j = 0;j<matrix[0].size();j++){
            totalsum +=abs(matrix[i][j]);
            if(matrix[i][j]<0){
                countneg++;
            }
             minvalue = min(minvalue,abs(matrix[i][j]));
        }
       }
       if(countneg%2==0){
        return totalsum;
       }
       return (totalsum-2*(minvalue));
    }
};