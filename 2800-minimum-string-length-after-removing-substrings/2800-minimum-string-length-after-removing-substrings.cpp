class Solution {
public:
    int minLength(string s) {
     int n = s.size();
     for(int i = 0;i<n-1;i++){
        if((s[i]== 'A' && s[i+1]=='B')||(s[i]=='C' && s[i+1]=='D')){
            for(int j = i;j<n-2;j++){
                s[j]=s[j+2];
            }
            n-=2;
        
        i = max(-1,i-2);
     }   
    }
    return n;
    }
};