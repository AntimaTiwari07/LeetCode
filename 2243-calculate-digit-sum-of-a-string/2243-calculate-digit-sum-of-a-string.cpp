class Solution {
public:
    string digitSum(string s, int k) {
        string ans = s;
        int cnt = 0;
     while(ans.size()>k){
        string temp ="";
        int sum =0;
        int n = ans.size();
       for(int i = 0;i<n-(n%k);i++){
         cnt++;
         sum+= (int)ans[i]-'0';
         if(cnt==k){
           temp+=to_string(sum);
           sum = 0;
           cnt = 0;
         }
       }
       if(n%k!=0){for(int j = n-(n%k);j<n;j++){
        sum+= (int)ans[j]-'0';
       }
       temp+=to_string(sum);}
       ans = temp;
     }
     return ans;   
    }
};