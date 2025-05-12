class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int st =100;
        int end = 999;
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i = 0;i<digits.size();i++){
            mp[digits[i]]++;
        }
        while(st<=end){
           int x = st;
           bool valid = true;
           unordered_map<int,int>temp;
           while(x!=0){
             temp[x%10]++; 
             x/=10;
           }
           for(auto i:temp){
            if(mp[i.first]<i.second){
                valid = false;
                break;
            }
           }
           if(valid && st%2==0)ans.push_back(st);
           st+=1;
        }
        return ans;
    }
};