class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool>v;
        /*
        bool valid = true;
        for(int i = 0;i<queries.size();i++){
            valid = true;
            for(int j = queries[i][0];j<queries[i][1];j++){
               int temp = nums[j];
               if((temp%2==0 && nums[j+1]%2==0) ||(temp%2!=0 && nums[j+1]%2!=0 )){
                valid = false;
                  v.push_back(false);
                  break;
               }
            }
            if(valid) v.push_back(true);
        }
        return v;
        */
        vector<int>index;
     for(int j =0;j<nums.size()-1;j++){
               int temp = nums[j];
               if((temp%2==0 && nums[j+1]%2==0) ||(temp%2!=0 && nums[j+1]%2!=0 )){
                  index.push_back(j);
               }
     }
     for(int i = 0;i<index.size();i++){
        cout<<index[i]<<" ";
     }
    
     for(int i = 0;i<queries.size();i++){
        bool valid = true;
      int st = 0;
      int end = index.size()-1;
      int mid;
      while(st<=end){
        mid = st+(end-st)/2;
        if(index[mid]>=queries[i][0] && index[mid]<queries[i][1]){
            valid = false;
            v.push_back(false);
            break;
        }
        else if(index[mid]<queries[i][0]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
      }
      if(valid)v.push_back(true);
     }
     return v;
    }
};