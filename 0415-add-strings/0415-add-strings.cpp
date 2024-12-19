class Solution {
public:
    string addStrings(string num1, string num2) {
     int i = num2.size()-1;
     int j = num1.size()-1;
     int carry = 0;
     string newstr="";
     while(i>=0 && j>=0){
        int temp = num2[i]-'0' + num1[j]-'0'+carry;
        int x = temp%10;
         carry = temp/10;
        newstr+=to_string(x);
        i--;
        j--;
     }
     cout<<"c = "<<carry<<endl;
    while(i>=0){
        int temp = num2[i]-'0'+carry;
        int x = temp%10;
        newstr+=to_string(x);
        carry = temp/10;
        i--;
    }
    while(j>=0){
         int temp = num1[j]-'0'+carry;
        int x = temp%10;
        newstr+=to_string(x);
        carry = temp/10;
        j--;
    }
    if(carry!=0){newstr+=to_string(carry);}
    reverse(newstr.begin(),newstr.end());
    return newstr;
    }
};