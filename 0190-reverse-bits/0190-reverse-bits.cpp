class Solution {
public:
string tobinary(int n){
    string s = "";
    while(n>0){
        s+=(char)(n%2)+'0';
        n = n/2;
    }
    return s;
}
int tonum(string x){
    int num = 0;
    long long temp = 1;
    for(int i = 31;i>=0;i--){
       num+=(temp)*(int)(x[i]-'0');
       temp*=2;
    }
    return num;
}
    int reverseBits(int n) {
        string x = tobinary(n);
        reverse(x.begin(),x.end());
        if(x.size()<32){
            int diff = 32-x.size();
            string zero = string(diff,'0');
            x = zero+x;
        }
       
        for(int i = 0;i<x.size()/2;i++){
            swap(x[i],x[x.size()-1-i]);
        }
      
        return tonum(x);
    }
    
};