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
            int ans = 0;
            int k = 0;
            bool valid = false;
        for(int i = 0;i<p.size();i++){
           if(p[i].first!=k) {ans =  k;;valid = true;break;}
           else k++;
        }
        string res = "";
        if (valid && ans == 0) {
            res = string(n, '0');  // Return "000..." if ans == 0
        } else {
            if(ans!=0){
                while(ans!=0){
                    res+=to_string(ans%2);
                    ans/=2;
                }
                reverse(res.begin(),res.end());
                cout<<res<<endl;
                if(res.size()<n){
                    while(res.size()!=n){
                        res = "0"+res;
                    }
                }
            }
            else {
                ans = p.size();
                 if(ans!=0){
                while(ans!=0){
                    res+=to_string(ans%2);
                    ans/=2;
                }
                reverse(res.begin(),res.end());
                cout<<res<<endl;
                if(res.size()<n){
                    while(res.size()!=n){
                        res = "0"+res;
                    }
                }
            }
            }
        }
        
        return res;
    }
};