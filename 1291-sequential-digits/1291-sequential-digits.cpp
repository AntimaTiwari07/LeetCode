class Solution {
public:
bool inc(int n){
    string s = to_string(n);
    for(int i = 1;i<s.size();i++){
        if((s[i]-'0') != (s[i-1]-'0')+1)return false;
    }
    return true;
}
    vector<int> sequentialDigits(int low, int high) {
        vector<int>num;
        num.push_back(12);
        int n =  12;
        for(int i = 3;i<=9;i++){
           n = n*10+i;
           num.push_back(n);
        }
        string s1 = to_string(low);
        string s2 = to_string(high);
        vector<int>ans;
        for(int i = s1.size();i<=s2.size();i++){
            int sum = 0;
            int j = 0;
            if(i-2>=num.size())break;
            long long first = num[i-2];
            while(j<i){
                sum = (sum*10) + 1;
                j++;
            }

            while(inc(first)==true){
            if(first>=low && first<=high){
             ans.push_back(first);
            }
               first+= sum;
            }
        }
        return ans;
    }
};