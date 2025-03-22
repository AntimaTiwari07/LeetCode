class Solution {
public:
   vector<int>rowgenerate(int row){
    vector<int>ans(row+1);
    long long res = 1;
    ans[0]=1;
    for(int j = 1;j<=row;j++){
        res=res*(row-j+1);
        res = res/(j);
        ans[j]=res;
    }
    return ans;
   }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>traingle;
       for(int i = 0;i<numRows;i++){
            traingle.push_back(rowgenerate(i));
       }
       return traingle;
    }
};