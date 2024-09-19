class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
      vector<int>v;
      int size = grid.size()*grid.size();
      vector<int>count(size+1,0);
       
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
               count[grid[i][j]]++;
                }
            }

        for(int i = 1;i<=size;i++){
            if(count[i]==2){
                v.push_back(i);
            }
        }
        for(int i = 1;i<=size;i++){
             if(count[i]==0){
              v.push_back(i);
            }
        }
            
            
return v;
    }
};