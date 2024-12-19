class Solution {
public:
    string addStrings(string num1, string num2) {
     int i = num2.size()-1;
     int j = num1.size()-1;
     int carry = 0;
     string newstr="";
     while(i>=0 && j>=0){
        int temp = num2[i]-48 + num1[j]-48 +carry;
        int x = temp%10;
         carry = temp/10;
        newstr+=(char)(x+48);
        i--;
        j--;
     }
    while(i>=0){
        int temp = num2[i]-48+carry;
        int x = temp%10;
        newstr+=(char)(x+48);
        carry = temp/10;
        i--;
    }
    while(j>=0){
         int temp = num1[j]-48+carry;
        int x = temp%10;
        newstr+=(char)(x+48);
        carry = temp/10;
        j--;
    }
    if(carry!=0){newstr+=(char)(carry+48);}
    for(int i = 0;i<newstr.size()/2;i++){
        swap(newstr[i] , newstr[newstr.size()-i-1]);
    }
    return newstr;
    }
};