class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        /*
        brute force
       int width = 0;
       for(int i = nums.size()-1;i>=0;i--){
        for(int j = 0;j<i;j++){
            if(nums[j]<=nums[i]){
              width = max((i-j),width);
            }
        }
       }
       if(width==0){
        return 0;
       }
       return width;
       */
       /*
       binary search
       int start = 0;
       int end = nums.size()-1;
       int mid;
       int width = 0;
       int ans = 0;
       while(start<=end){
        mid = start+(end-start)/2;
        width = 0;
        for(int i = 0;i<mid;i++){
            if(nums[i]<=nums[mid]){
                width = mid-i;
                ans = max(ans,width);
                cout<<width<<endl;
                cout<<ans<<" ";
                 break;
            }
        }
        if(width>0){
            start = mid+1;
        }
            else{
                end = mid-1;
            }
        }
        if(ans==0){
            return 0;
        }
        return ans;
        */
        //chatgpt
        int n = nums.size();
        vector<vector<int>>v;
        for(int i = 0;i<n;i++){
            v.push_back({nums[i],i});//[element,index]
        }
        sort(v.begin(),v.end());
        int maxwidth = 0;
        int min_index = n;
        for(int i = 0;i<n;i++){
            maxwidth = max(maxwidth,v[i][1]-min_index);
            min_index = min(min_index,v[i][1]);
        }
        return maxwidth;
    }
};