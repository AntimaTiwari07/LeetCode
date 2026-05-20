class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>mp;
        vector<int>v(A.size());
        for(int i = 0;i<A.size();i++){
            mp[A[i]]++;
            mp[B[i]]++;
            int cnt = 0;
            for(auto j:mp){
                if(j.second==2)cnt+=1;
            }
            v[i]  =cnt;
        }
        return v;
    }
};