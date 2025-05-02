class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
       string ans="";
       for(int i = 0;i<n;i++){
        ans+='.';
       }
        for(int i = 0;i<dominoes.size();i++){
            bool flag = false;
           if(dominoes[i]=='L'){
            ans[i]='L';
            int x = i-1;
            int cnt = 0;
            while(x>=0 &&dominoes[x]=='.'){cnt+=1;x--;}
            if(x>=0 && dominoes[x]=='R')flag = true;
            x = i-1;
            if(cnt==1 && ans[x]!='R') ans[x]='L';
            else if(cnt==1 && ans[x]=='R')ans[x]='.';
            else{
                 if(flag){
               cnt = cnt/2;
                }
                while(cnt>0){
                     if( ans[x]!='R')ans[x]='L';
                     else ans[x]='.';
                     x--;
                     cnt--;
                }
            }
           }
           else if(dominoes[i]=='R'){
            ans[i]='R';
            int y = i+1;
            int cnt = 0;
            while(y<n &&dominoes[y]=='.'){cnt+=1;y++;}
            if(y<n && dominoes[y]=='L')flag = true;
            y = i+1;
            if(cnt==1) ans[y]='R';
            else{
                if(flag){
               cnt = cnt/2;
                }
                while(cnt>0){
                     ans[y]='R';
                     y++;
                     cnt--;
                }
            }
           }
        }
        return ans;
    }
};