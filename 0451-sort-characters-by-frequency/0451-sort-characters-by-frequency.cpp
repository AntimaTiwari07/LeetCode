class Solution {
public:
    string frequencySort(string s) {
        int count[256]={0};
        for(int i = 0;i<s.size();i++){
         if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z' )||(s[i]>='0'&&s[i]<='9'))count[s[i]-'0']++;
        }
        string newstr = "";
        int k = 0;
        while(k<s.size()){
            int idx = -1;
            int maxi = INT_MIN;
        for(int i = 0;i<256;i++){
            if(count[i]>maxi){
                maxi = count[i];
                idx = i;
            }
        }
        for(int i = 1;i<=maxi;i++){  
            newstr+=(char)(idx+'0');
        }
        count[idx]=0;
        k++;
        }
        return newstr;
    }
};