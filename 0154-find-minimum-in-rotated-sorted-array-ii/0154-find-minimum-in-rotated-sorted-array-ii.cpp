class Solution {
public:
void removedup(vector<int>& nums){
    unordered_map<int,int>mp;
    vector<int>v;
    for(int i =0;i<nums.size();i++){
        if(mp[nums[i]]==0){
         v.push_back(nums[i]);
        }
        mp[nums[i]]++;
    }
    nums = v;
}

    int findMin(vector<int>& nums) {
        removedup(nums);
  int st = 0;
  int end = nums.size()/2-1;
  int mid;
  int maxi = st;
  while(st<=end){
    mid = st+(end-st)/2;
    if(nums[mid]>=nums[maxi]){
        maxi = mid;
        st = mid+1;
    }
    else{
        end = mid-1;
    }
  }
  st = nums.size()/2;
  end = nums.size()-1;
  int maxi2 = st;
  while(st<=end){
    mid = st+(end-st)/2;
     if(nums[mid]>=nums[maxi2]){
        maxi2 = mid;
        st = mid+1;
    }
    else{
        end = mid-1;
    }
  }
  if(nums[maxi2]>nums[maxi])return nums[(maxi2+1)%nums.size()];
  return nums[(maxi+1)%nums.size()];
    }
};