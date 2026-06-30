class Solution {
public:
bool isvalid(int freq[3]){
    for(int i = 0;i<3;i++){
        if(freq[i]==0)return false;
    }
    return true;
}
    int numberOfSubstrings(string s) {
        int count = 0;
        int len=s.size();
        int freq[3]={0};
        int i = 0;
        int j = 0;
        while(i<s.size()&&j<s.size()){
            freq[s[j]-'a']+=1;
                while(isvalid(freq)){
                     count+=(len-j);
                    freq[s[i]-'a']-=1;
                    i++;
                }
            j++;
        }
        return count;
    }
};