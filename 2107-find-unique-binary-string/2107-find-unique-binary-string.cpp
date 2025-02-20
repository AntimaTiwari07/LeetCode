class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        vector<pair<int,string>>p;
         for(int i = 0;i<nums.size();i++){
                string temp = nums[i];
                int j = 0;
                int sum = 0;
                while(j<temp.size()){
                    sum+=pow(2,temp.size()-1-j)*(temp[j]-'0');
                    j++;
                }
                p.push_back({sum,nums[i]});
            }
            sort(p.begin(),p.end());
            for(int i = 0;i<p.size();i++){
                cout<<p[i].first<<" "<<p[i].second<<endl;
            }
            int ans = 0;
            int k = 0;
            bool valid = false;
        for(int i = 0;i<p.size();i++){
           if(p[i].first!=k) {ans =  k;;valid = true;break;}
           else k++;
        }
        string res;
        if (valid && ans == 0) {
            res = string(n, '0');  // Return "000..." if ans == 0
        } else {
            if(ans!=0)res = bitset<64>(ans).to_string().substr(64 - nums.size());
            else {
                ans = p.size();
                res = bitset<64>(ans).to_string().substr(64 - nums.size());
            }
        }
        
        return res;
    }
};