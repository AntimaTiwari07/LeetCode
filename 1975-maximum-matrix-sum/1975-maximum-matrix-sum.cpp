class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        // priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
        // for(int i = 0;i<matrix.size();i++){
        //     for(int j = 0;j<matrix[0].size();j++){
        //         if(matrix[i][j]<0)q.push({matrix[i][j],{i,j}});
        //     }
        // }
        // while(!q.empty()){
        //     pair<int,pair<int,int>>p = q.top();
        //     q.pop();
        //     pair<int,int>index = p.second;
        //     if(matrix[index.first][index.second]<0){
        //         // cout<<matrix[index.first][index.second]<<endl;
        //     matrix[index.first][index.second] = -(p.first);
        //     int mini= INT_MAX;
        //     int i = index.first,j = index.second;
        //     if(index.first-1>=0 && matrix[index.first-1][index.second]<mini ){
        //         mini =matrix[index.first-1][index.second];
        //         i = index.first-1;j = index.second;
        //     }
        //     if(index.first+1<matrix.size() && matrix[index.first+1][index.second]<mini){
        //         mini = matrix[index.first+1][index.second];
        //          i = index.first+1;j = index.second;
        //     }
        //     if(index.second-1>=0 && matrix[index.first][index.second-1]<mini){
        //         mini = matrix[index.first][index.second-1];
        //          i = index.first;j = index.second-1;
        //     }
        //     if(index.second+1<matrix[0].size() && matrix[index.first][index.second+1]<mini){
        //         mini = matrix[index.first][index.second+1];
        //            i = index.first;j = index.second+1;
        //     }
        //     matrix[i][j] = -(mini);
        // }
        // }
        // long long sum = 0;
        // for(int i = 0;i<matrix.size();i++){
        //     for(int j = 0;j<matrix[0].size();j++){
        //         sum+=matrix[i][j];
        //     }
        // }
        // return sum;
long long sum = 0;
int cnt = 0;
int mini = INT_MAX;
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[0].size();j++){
                sum+=abs(matrix[i][j]);
                if(matrix[i][j]<0){
                    cnt+=1;
                }
                mini = min(mini,abs(matrix[i][j]));
            }
        }
        if(cnt%2==0)return sum;
        return sum-2*mini;
    }
};