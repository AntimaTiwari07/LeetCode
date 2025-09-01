class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int>v;
        int maxprod = INT_MIN;
        if(nums.size()==1)return nums[0];
        for(int i = 0;i<nums.size();i++){
         if(nums[i]==0 && !v.empty()){
            cout<<"size = "<<v.size()<<endl;
            int lastnum = v[v.size()-1];
             maxprod = max({maxprod,lastnum,0});

            for(int j = 0;j<=(int)v.size()-2;j++){
            maxprod = max({maxprod,v[j],lastnum/v[j]});
            }
             
              cout<<lastnum<<endl;
            v.erase(v.begin(),v.end());
         }
         else{
            if(nums[i]==0)continue;
            if(v.empty()) v.push_back(nums[i]);
            else v.push_back(nums[i]*v[v.size()-1]);
         }
         maxprod = max({maxprod,nums[i]});
        }
        if(v.empty())return max(maxprod,0);
        int lastnum = v[v.size()-1];
             maxprod = max({maxprod,lastnum});
             if(v.size()>=2){
            for(int j = 0;j<=(int)v.size()-2;j++){
                cout<<v[j]<<" ";
            maxprod = max({maxprod,v[j],lastnum/v[j]});
            }
             }
            cout<<lastnum<<endl;
        return maxprod;
    }
};