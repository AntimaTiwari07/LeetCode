class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        vector<int>ans;
        vector<long long>sum(s.size(),0);
        vector<long long>v(s.size());
        const long long MOD = 1000000007;
        vector<long long>power(s.size()+1,0);
        power[0] = 1;
        for(int i = 1;i<s.size()+1;i++){
            power[i] = (power[i-1]*10)%MOD;
        }
        vector<int>dig(s.size(),0);
        int digit = 0;
        long long cnt = 0;
        long long str = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]!='0'){
                str= (str*10+ (s[i]-'0'))%MOD;
                digit++;
            }
            cnt+=(s[i]-'0');
            sum[i] = cnt;
            v[i] = str;
            dig[i]=digit;
        }

        long long summ = 0;
        for(int i = 0;i<queries.size();i++){
           if(queries[i][0]-1>=0){
            summ = sum[queries[i][1]]-sum[queries[i][0]-1];
            int k = dig[queries[i][1]]-dig[queries[i][0]-1];
           long long val = (v[queries[i][1]]-(v[queries[i][0]-1]*power[k])%MOD+ MOD)%MOD;
           long long res = ((val) * (summ % MOD)) % MOD;
           ans.push_back(res);
           }else{ summ= sum[queries[i][1]];
            long long val = v[queries[i][1]];
            long long res = ((val % MOD) * (summ % MOD)) % MOD;
        //    int result = res%1000000007;
           ans.push_back(res);
           }    
        }
        return ans;
    }
};