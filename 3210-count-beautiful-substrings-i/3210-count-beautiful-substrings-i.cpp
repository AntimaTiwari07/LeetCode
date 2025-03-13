class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int count = 0;
        for(int i =0;i<s.size();i++){
            int vow = 0;
            int con = 0;
            for(int j = i;j<s.size();j++){
                if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                    vow+=1;
                }
                else{
                    con+=1;
                }
                if(vow==con && (vow*con)%k==0)count+=1;
            }
        }
        return count;
    }
};