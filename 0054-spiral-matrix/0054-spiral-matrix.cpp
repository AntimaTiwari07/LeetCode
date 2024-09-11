class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
      int row1 = 0;
      int row2 = matrix.size()-1;
      int col1 = 0;
      int col2 = matrix[0].size()-1;
      while(((col1 < matrix[0].size())  && (row1 < matrix.size()) ) && (row2 >=0) &&(col2>=0)){
      //row 1
      if(col1<=col2){
       for(int i = col1;i<=col2;i++)   v.push_back(matrix[row1][i]);
      }
      else break;
      //last col
      if((row1+1)<=row2){
     for(int i = row1+1;i<=row2;i++)  v.push_back(matrix[i][col2]);
      }
      else break;
      //last row
      if((col2-1)>=col1){
     for(int i = col2-1;i>=col1;i--) v.push_back(matrix[row2][i]);
      }
      else break;
   
     //first col
      if((row2-1)>row1){
     for(int i = row2-1;i>row1;i--) v.push_back(matrix[i][col1]);
      }
      else break;
    
      row1 ++;
      col1++;
       col2--;
        row2--;
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return v;
    }
};