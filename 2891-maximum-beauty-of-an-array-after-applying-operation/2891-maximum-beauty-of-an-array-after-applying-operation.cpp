class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        /*
        unordered_map<int,int>count;
        unordered_map<int,int>freq;
        vector<pair<int,int>>range;
        for(int i = 0;i<nums.size();i++){
          range.push_back(make_pair(nums[i]-k,nums[i]+k));
          freq[nums[i]]++;
        }
        for(int idx = 0;idx<nums.size();idx++){
            for(auto i : range){
               if(nums[idx]>=i.first && nums[idx]<=i.second){
                count[nums[idx]]++;
               }
            }
        }
        for(auto j :count){
            cout<<j.first<<" "<<j.second<<endl;
        }
        int maxoccur = INT_MIN;
        int element = 0;
        for(auto i : count){
            if(i.second>maxoccur) {
                maxoccur = i.second;
                element = i.first;
        }
        }
        for(auto i :freq){
            cout<<i.first<<" "<<i.second<<endl;
        }
        int maxfreq = -1;
        for(auto k : freq){
            if(k.first==element){
                maxfreq = k.second;
                break;
            }
        }
        return maxoccur/maxfreq;
        */
        sort(nums.begin(),nums.end());
        /*
         vector<pair<int,int>>range;
         for(int i = 0;i<nums.size();i++){
          range.push_back(make_pair(nums[i]-k,nums[i]+k));
        }
        */
        /*
        int st = nums[0]-k;
        int end = nums[nums.size()-1]+k;
        int mid;
        int maxfreq = 1;
        while(st<=end){
           mid  = st+(end-st)/2;
           int count = 0;
           for(auto i : range){
            if(mid>=i.first && mid<=i.second) count++;
           }
          maxfreq = max(maxfreq,count);
            if(count<maxfreq){
            st = mid+1;
           }
           else{
            end = mid-1;
           }
        }
        */
        /*
        int maxfreq = 1;
        for(int i =  0;i< nums[nums.size()-1]+k;i++){
            int count = 0;
            for(auto j : range){
            if(i>=j.first && i<=j.second) count++;
            else if(j.first>i){break;}
           }
           maxfreq = max(maxfreq,count);
        }
        return maxfreq;
        */
        
        int i = 0;
        int j = 0;
        int maxsize = INT_MIN;
        while(i<nums.size() && j<nums.size()){
            if(nums[j]-nums[i]<=2*k){
               maxsize = max(maxsize,j-i+1);
               j++;
            }
            else i++;
        }
         return maxsize;
    }
};