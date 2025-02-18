class Solution {
public:
    vector<int> diStringMatch(string s) {
          vector<int>v(s.size()+1);
          int n = s.size();
          int dec = n;
          int inc = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='I'){
                v[i]=inc;
                inc+=1;
            }
            else{
               v[i]=dec;
               dec-=1;
            }
        }
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum+=v[i];
        }
        v[n] = (n*(n+1))/2  - sum;
        return v;
    }
};