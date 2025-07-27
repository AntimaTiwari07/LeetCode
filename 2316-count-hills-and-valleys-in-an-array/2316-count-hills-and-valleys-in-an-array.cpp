class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count = 0;
       vector<int>v;
        for(int i = 1;i<nums.size()-1;i++){
            if(nums[i]==nums[i-1])continue;
            int st = i-1;
            int end = i+1;
            bool hills = false;
            bool valey = false;
            while(st>=0 ){
             if(nums[st]>nums[i]){valey = true;break;}
             else if(nums[st]<nums[i]){hills = true;break;}
             st--;
            }
            while(end<nums.size()){
                 if(nums[end]>nums[i] && valey ){
                    if(v.empty())v.push_back(0);
                    else if(!v.empty() && v.back()!=0)
                    v.push_back(0);
                    break;
                    }
             else if(nums[end]<nums[i] && hills){ 
                if(v.empty())v.push_back(1);
                    else if(!v.empty() && v.back()!=1)
                    v.push_back(1);
                   break;
                }
             end++;
            }
        }
        return v.size();
    }
};