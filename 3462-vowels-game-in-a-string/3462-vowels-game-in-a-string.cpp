class Solution {
public:
    bool doesAliceWin(string s) {
        int cnt = 0;
        int idx = -1;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
                cnt+=1;
            }
            if(cnt%2!=0){
                idx = i;
            }
        }
       
        if(idx==-1)return false;
        if(idx==s.size())return true;
        int con = 0;
        int vow = 0;
        for(int i = idx+1;i<s.size();i++){
            if(s[i]!='a' && s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u')con+=1;
            else vow+=1;
        }
        if(vow==0 && con!=0)return false;
        if(con==0 && vow!=0)return true;
        return true;
    }

};