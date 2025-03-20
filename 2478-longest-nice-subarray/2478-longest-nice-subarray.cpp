class Solution {
public:
  void addbit(vector<int>&v,int x){
    int idx = 0;
    while(x>0){
         if(x%2==1)v[idx]=1;
         idx++;
         x/=2;
    }
  }
  void removebit(vector<int>&v,int x){
    int idx = 0;
    while(x>0){
        if(x%2==1)v[idx]=0;
        idx++;
        x/=2;
    }
  }
  bool canAdd(vector<int>&v,int x){
    int idx = 0;
    while(x>0){
        if(x%2==1 && v[idx]==1)return false;
        idx++;
        x/=2;
    }
    return true;
  }
    int longestNiceSubarray(vector<int>& nums) {
        vector<int>v(40,0);
        int ans = 1;
        int i = 0;int j = 0;
        while(j<nums.size()&& i<nums.size()){
            while(!canAdd(v,nums[j])){
                removebit(v,nums[i]);
                i++;
            }
            addbit(v,nums[j]);
            ans = max(ans,(j-i+1));
            j++;
        }  
        return ans; 
    }
};