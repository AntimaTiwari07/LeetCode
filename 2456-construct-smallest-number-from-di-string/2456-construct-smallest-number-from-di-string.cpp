class Solution {
public:
    string smallestNumber(string pattern) {
        string num ="123456789";
        for(int i = 0;i<pattern.size();i++){
            if(pattern[i]=='I'){
                if(num[i]>num[i+1]){
                    swap(num[i],num[i+1]);
                    i = -1;
                }
            }
            else{
                if(num[i]<num[i+1]){
                    swap(num[i],num[i+1]);
                    i = -1;
                }
            }
        }
        string ans = "";
        int n = pattern.size()+1;
        for(int i =0;i<n;i++){
            ans+=num[i];
        }
        return ans;
    }
};