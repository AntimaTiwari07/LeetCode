class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        /*
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
        */
        for(int i = 0;i<s.size();i++){
            mp[s[i]]++;
        }
        int k = 0;
        string newstr="";
        while(k<s.size()){
            int maxi = INT_MIN;
            char ele = '\0';
            for(auto i:mp){
                if(i.second>maxi){
                    maxi=i.second;
                    ele = i.first;
                }
            }
            for(int i = 1;i<=maxi;i++){
                newstr+=ele;
            }
            mp[ele]=0;
            k++;
        }
        return newstr;
    }
};