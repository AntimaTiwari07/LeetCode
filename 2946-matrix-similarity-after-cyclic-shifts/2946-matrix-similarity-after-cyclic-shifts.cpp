class Solution {
public:
   void left(vector<vector<int>>& v){
    for(int i = 0;i<v.size();i+=2){
        int prev = v[i][v[0].size()-1];
       for(int j = v[0].size()-2;j>=0;j--){
        int curr = v[i][j];
        v[i][j]=prev;
        prev = curr;
       }
       v[i][v[0].size()-1] = prev;
    }
   }
   void right(vector<vector<int>>& v){
        for(int i = 1;i<v.size();i+=2){
        int prev = v[i][0];
       for(int j = 1;j<v[0].size();j++){
        int curr = v[i][j];
        v[i][j]=prev;
        prev = curr;
       }
       v[i][0] = prev;
    }
   }
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>>v = mat;
        int turn = k%(mat[0].size());
        for(int i = 0;i<turn;i++){
            left(v);
            right(v);
        }
      if(v==mat)return true;
      return false;
    }
};