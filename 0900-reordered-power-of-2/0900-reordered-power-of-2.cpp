class Solution {
public:
bool isPowerOf2(int n){
    if(n==0)return false;
    while(n!=1){
        if(n%2!=0)return false;
        n/=2;
    }
    return true;
}
bool ispowerof10(int n){
    if(n==0)return false;
    while(n!=1){
        if(n%10!=0)return false;
        n/=10;
    }
    return true;
}
void rearrange(string n,int i,vector<string>&v){
    if(i==n.size()-1){
       v.push_back(n);
       return;
    } 
    
    for(int j = i;j<n.size();j++){
        swap(n[i],n[j]);
        rearrange(n,i+1,v);
        swap(n[i],n[j]);
    }

}

    bool reorderedPowerOf2(int n) {
        // string conversion
        if(n==0)return false;
        else if(n==1)return true;
        else if(n<=9){
            if(n==2|| n==4 || n==8)return true;
             return false;
        }
       vector<string>v;
       string str = "";
       while(n!=0){
        str+= to_string(n%10);
        n/=10;
       }
       reverse(str.begin(),str.end());
       //check for power of 10
       long long number = 0;
        string temp1 = str;
        for(int j = 0;j<temp1.size();j++){
            number = number*10+(int)(temp1[j]-'0');
        }
        if(ispowerof10(number))return false;

       rearrange(str,0,v);

       for(int i = 0;i<v.size();i++){
        long long num = 0;
        string temp = v[i];
        for(int j = 0;j<temp.size();j++){
            num = num*10+(int)(temp[j]-'0');
        }
        
        if(isPowerOf2(num))return true;
       }
       return false;
    }
};