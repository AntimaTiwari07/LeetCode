class Solution {
    int solve(string str,string b,int times){
        for(int i = 0;i<str.size();i++){
        if(str.substr(i,b.size())==b)return times;
    }
    return -1;
    }
public:
    int repeatedStringMatch(string a, string b) {
        int a_len = a.size();
        int b_len = b.size();
        int times = b_len/a_len ;
        if(b_len%a_len!=0)times+=1;
        if(a_len>=b_len){
          if(solve(a,b,1)!=-1)return 1;
        }
            string s="";
            for(int i = 1;i<=times;i++){
                s+=a;
            }
             if(solve(s,b,times)!=-1)return times;
             return solve(s+a,b,times+1);
    }
};