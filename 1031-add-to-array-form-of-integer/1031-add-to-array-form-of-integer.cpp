class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
      string number= "";
    for(int i = 0;i<num.size();i++){
       number+=(char)num[i]+48;
    }
    cout<<number<<endl;
    string newk = to_string(k);
     int n= number.size();
       int m = newk.size();
        string new_num=number;
       string new_k=newk;
       if(n<m){
        new_num = "";
        int temp = m-n; 
        while(temp!=0){
           new_num+='0';
           temp--;
        }
        new_num+=number;
       }
       else if(m<n){
        new_k = "";
        int temp = n-m;   
        while(temp!=0){
           new_k+='0';
           temp--;
        }
        new_k+=newk;
       }
       cout<<new_num<<" "<<new_k<<endl;
    string sum ="";
    int carry = 0;
    for(int i = new_num.size()-1;i>=0;i--){
        int temp = new_num[i]-48+new_k[i]-48+carry;
        if(temp>9){
            int x = temp;
            sum+=to_string(x%10);
            carry = temp/10;
        }
        else{
             sum+=to_string(temp);
             carry = 0;
        }
    }
    reverse(sum.begin(),sum.end());
    if(carry>0)sum=to_string(carry) +sum;
    cout<<sum<<endl;
    vector<int>v;
    for(int i = 0;i<sum.size();i++){
        v.push_back(sum[i]-48);
    }
    return v;
}    
};