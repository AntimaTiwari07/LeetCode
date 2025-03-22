class Solution {
public:
long long fact(int n,int r){
    long long res = 1;
    for(int i = 0;i<r;i++){
        res = res*(n-i);
        res/=(i+1);
    }
    return res;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v(numRows);
        for(int i=0;i<numRows;i++){
           for(int j = 0;j<=i;j++){
            v[i].push_back(fact(i,j));
           }
        }
        return v;
    }
};