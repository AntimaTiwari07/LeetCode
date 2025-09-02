class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>res;
        for(int i = 0;i<nums.size();i++){
          if(res.empty())res.push_back(nums[i]);
          else if(nums[i]>res.back()) res.push_back(nums[i]);
          else {
            int st = 0;
            int end = res.size()-1;
            int mid;
            int idx = -1;
            while(st<=end){
                mid = st+(end-st)/2;
                if(res[mid]==nums[i]){ st = mid;break;}
                if(st==end && nums[i]>res[mid]) {st = st+1; break;}
                else if(st==end && nums[i]<res[mid]){ break;}
                else if(st!=end && nums[i]<res[mid]) end = mid-1;
                else st = mid+1; 
            }
            res[st] = nums[i];
            for(int i = 0;i<res.size();i++)cout<<res[i]<<" ";
            cout<<endl;
          }
        }
        for(int i = 0;i<res.size();i++)cout<<res[i]<<" ";
        return res.size();
    }
};