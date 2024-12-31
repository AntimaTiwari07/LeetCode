class Solution {
public:
    string addBinary(string a, string b) {
       int n= a.size();
       int m = b.size();
        string newa=a;
       string newb=b;
       if(n<m){
        newa = "";
        int temp = m-n; 
        while(temp!=0){
           newa+='0';
           temp--;
        }
        newa+=a;
       }
       else if(m<n){
        newb = "";
        int temp = n-m;   
        while(temp!=0){
           newb+='0';
           temp--;
        }
        newb+=b;
       }
       cout<<newa<<" "<<newb<<endl;
       char carry = '0';
       string ans="";
       for(int i = newa.size()-1;i>=0;i--){
        if(carry=='1'){
        if(newa[i]=='1'&& newb[i]=='1'){
            ans+='1';
            carry = '1';
        }
        else if(newa[i]=='0'&&newb[i]=='0'){
             ans+='1';
             carry = '0';
        }
        else if(( newa[i]=='1'&& newb[i]=='0')||(carry=='1'&& newa[i]=='0'&&newb[i]=='1')){
             ans+='0';
             carry = '1';
        }
        }
        else {
           if(newa[i]=='1'&& newb[i]=='0'||newa[i]=='0'&& newb[i]=='1'){
            ans+='1';
            carry = '0';
           }
           else if(newa[i]=='0'&& newb[i]=='0'){
            ans+='0';
            carry = '0';
           }
           else{
            ans+='0';
            carry = '1';
           }
        }
       }
       reverse(ans.begin(),ans.end());
       if(carry=='1')return carry+ans;
       return ans;
    }
};