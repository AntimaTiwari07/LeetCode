class Solution {
public:
/*
string solve(int n,int k,string s,int i){
    if(i==n){
        return s;
    }
    if(k-1<s.size())return to_string(s[k-1]);

    string newstr ="";
    for(int i = 0;i<s.size();i++){
        if(s[i]=='0')newstr+='1';
        else newstr+='0';
    }
    return solve(n,k,s+newstr,i+1);
}
*/
    int kthGrammar(int n, int k) {
       //string ans = solve(n,k,"0",1);
      //return (int)(ans[k-1]-'0');
      if(n==1)return 0;
      int mid = pow(2,n-1)/2;
      if(k<=mid){
        return kthGrammar(n-1,k);
      }
      else{
        return 1- kthGrammar(n-1,k-mid);
      }
    }

};