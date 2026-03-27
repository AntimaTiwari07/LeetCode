class Solution {
public:
    int findNthDigit(int n) {
        if(n<=9)return n;
        vector<vector<int>>v(9,vector<int>(2,0));
        for(int i = 0;i<9;i++){
         v[i][0] = pow(10,i);
         v[i][1]= pow(10,i+1)-1;
        }
        int range = -1;
        long long noofdig = 0;
        
       for(int i = 0;i<v.size();i++){
         noofdig += (long long)((v[i][1]-v[i][0])+1 )*(i+1);
        if(n<=noofdig){
            range = i;
            break;
     }       
       }
       int dig = range+1;
       long long cnt = noofdig - ((long long)((v[range][1]-v[range][0])+1 )*dig);
      
       string num = "";
       int x = (n-cnt-1)/dig;
       num = to_string(v[range][0]+x);
       
       int idx = (n-cnt-1)%dig;
       return (int)(num[idx]-'0'); 


    //    for(int i= v[range][0];i<=v[range][1];i++){
    //     str = to_string(i);
    //     if(n>=cnt && n<cnt+dig)break;
    //     cnt+=dig;
    //    }
    //    cout<<str<<endl;
    //    return (int)(str[n%cnt]-'0');

    }
};