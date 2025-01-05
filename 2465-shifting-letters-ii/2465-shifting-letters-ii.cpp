class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
       vector<int>v(s.size(),0);
       /*
       for(int i = 0;i<shifts.size();i++){
        for(int j = shifts[i][0];j<=shifts[i][1];j++){
            if(shifts[i][2]==0){
                if(s[j]=='a') s[j]='z';
                else s[j]=s[j]-1; 
            }
            else if(shifts[i][2]==1){
                if(s[j]=='z') s[j]='a';
                else s[j]+=1; 
            }
        }
       }
      return s;
      */
       for(int i = 0;i<shifts.size();i++){
        //difference array technique used when we have to update in range
        int st = shifts[i][0];
        int end = shifts[i][1];
            if(shifts[i][2]==0){
                v[st]+=(-1);
               if(end+1<s.size()) v[end+1]+=1;
            }
            else{
                v[st]+=1;
                if(end+1<s.size())v[end+1]+=(-1);
            }
        }
        vector<int>sum(s.size(),0);
        sum[0]=v[0];
        for(int i = 1;i<v.size();i++){
         sum[i]=v[i]+sum[i-1];
        }
        for (int i = 0; i < sum.size(); i++) {
       int shift = sum[i] % 26;  // Handle large shifts by limiting to within 26
     if (shift < 0) {
        s[i] = 'a' + (s[i] - 'a' + shift + 26) % 26;
    } else if(shift>0){
        s[i] = 'a' + (s[i] - 'a' + shift) % 26;
    }
}
        
        return s;
    }
};