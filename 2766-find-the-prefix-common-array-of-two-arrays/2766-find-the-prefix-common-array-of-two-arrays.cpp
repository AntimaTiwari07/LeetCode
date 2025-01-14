class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int count[51]={0};
        vector<int>ans;
        for(int i = 0;i<A.size();i++){
            for(int j = 0;j<=i;j++){
                count[A[j]]++;
                count[B[j]]++;
            }
            int point = 0;
            for(int i = 0;i<51;i++){
                if(count[i]==2)point++;
                count[i]=0;
            }
            ans.push_back(point);
        }
        return ans;
    }
};