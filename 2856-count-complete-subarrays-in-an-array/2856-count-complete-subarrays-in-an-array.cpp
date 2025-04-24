class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_map<int,int>distinct;
        for(int i=0;i<nums.size();i++){
            distinct[nums[i]]++;
        }
        int dis_ele = distinct.size();
        int cnt = 0;
        int i =0;
        int j = 0;
        int n = nums.size();
        vector<int>v(2001,0);
        while(i<n && j<n){
            v[nums[j]]++;
            int count  =0;
            for(int k = 0;k<2001;k++){
                if(v[k]>0)count+=1;
            }
            while(count==dis_ele){
                cnt+=(n-j);
                v[nums[i]]--;
                i++;
                count =0;
                 for(int k = 0;k<2001;k++){
                if(v[k]>0)count+=1;
            }
            }
             j++;
        }
        
   return cnt;
    }
};