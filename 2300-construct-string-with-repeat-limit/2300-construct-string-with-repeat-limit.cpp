class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        int n = s.size();
        int x = repeatLimit;
        vector<char> v;
        vector<int> freq;
        for(int i = 0;i<n;i++){
            bool flag = false;
            for(int j = 0;j<v.size();j++){
                if(v[j] == s[i]){
                    freq[j]++;
                    flag = true;
                }
            }
            if(!flag){v.push_back(s[i]);freq.push_back(1);}
        }
        string ans = "";
        bool flag = false;
        while(!flag){
            flag = true;
            for(int i = 0;i+1<v.size();i++){
                while(i+1<v.size() && v[i]>v[i+1]){
                    flag = false;
                    swap(v[i],v[i+1]);
                    swap(freq[i],freq[i+1]);
                    i++;
                }
            }
        }
        int i = v.size()-1;
        while(i>=0){
            int count = 1;
            if(i<v.size()-1 && freq[i]>=1 &&freq[i+1]>0){
                ans+=v[i];
                freq[i]--;
                i++;
            }
            if(freq[i]>=x){
                while(count<=x){
                    ans+=v[i];
                    count++;
                    freq[i]--;
                }
                i--;
            }
            else if(freq[i]>0 && freq[i]<x){
                while(freq[i]>0){
                    ans+=v[i];
                    freq[i]--;
                }
                i--;
            }
            else if(freq[i] == 0) {i--;
            v.erase(v.begin()+i+1);
            freq.erase(freq.begin()+i+1);}
        }
        return ans;
    }
};