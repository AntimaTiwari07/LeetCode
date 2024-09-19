class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        /*
        bool found = false;
        int row =matrix.size();
            int col = matrix[0].size();
        int startp = 0;
        int endp = (col*(row-1))+ (col-1);
        int midp = (sp+endp)/2;
        while(startp<=endp){
            midp = (startp+endp)/2;
            if(matrix[midp/col][midp%col]==target){
                found = true;
                break;
            }
            else if(matrix[midp/col][midp%col]>target){
                endp = midp-1;
            }
            else{
                startp = midp+1;
            }
        }
        return found;
        */
        int row = 0;
        int col = matrix[0].size()-1;
        while((row<matrix.size())&&(col>=0)){
            if(target==matrix[row][col]){
                return true;
            }
            else if(target<matrix[row][col]){
                col--;
            }
            else{
                row++;
            }
        }
        return false;
    }
};