class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3)return false;
        int vow = 0;
        int con = 0;
        int dig = 0;
        for(int i = 0;i<word.size();i++){
            if(word[i]>='a' && word[i]<='z' || (word[i]>='A' && word[i]<='Z')||(word[i]>='0'&&word[i]<='9')){
                if((word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')||(word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U')){
                    vow+=1;
                }
                 else if(word[i]>='0' && word[i]<='9') dig+=1;
                 else con+=1;
            }
            else return false;
        }
        if(vow>0 && con>0)return true;
        return false;
    }
};