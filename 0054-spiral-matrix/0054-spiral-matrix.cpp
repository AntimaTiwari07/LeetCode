class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0;
        int right = n-1;
        int up = 0;
        int bottom = m-1;
        vector<vector<int>>visited(m,vector<int>(n,0));
        while(v.size()!=m*n){
           //right
           for(int i = left;i<=right;i++){
            if(visited[up][i]==0){
                v.push_back(matrix[up][i]);
                visited[up][i] = 1;
            }
           }
           //down
           for(int i = up;i<=bottom;i++){
            if(visited[i][right]==0){
                v.push_back(matrix[i][right]);
                visited[i][right] = 1;
            }
           }
           //left
           for(int i = right;i>=left;i--){
            if(visited[bottom][i]==0){
                v.push_back(matrix[bottom][i]);
                visited[bottom][i] = 1;
            }
           }
           //up
           for(int i = bottom;i>=up;i--){
            if(visited[i][left]==0){
                v.push_back(matrix[i][left]);
                visited[i][left] = 1;
            }
           }
           left+=1;
           right-=1;
           up+=1;
           bottom-=1;
        }
        return v;
    }
};