class Solution {
public:
bool zeroarray(vector<int>& nums, vector<vector<int>>& queries,int mid){
    vector<int>diff(nums.size()+1,0);
    for(int i = 0;i<=mid;i++){
        diff[queries[i][0]]+=queries[i][2];
        diff[queries[i][1]+1]-=queries[i][2];
    }
    for(int i = 1;i<diff.size();i++){
        diff[i]+=diff[i-1];
    }
    for(int i = 0;i<nums.size();i++){
        if(nums[i]-diff[i]>0)return false;
    }
    return true;
}
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        bool valid = true;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=0){
                valid = false;
                break;
            }
        }
 if(valid)return 0;
       int st = 0;
       int end = queries.size()-1;
       int mid;
       int result= 0;
       while(st<=end){
        mid = st+(end-st)/2;
        if(zeroarray(nums,queries,mid)){
            result = mid+1;
            end = mid-1;
        }
        else{
            st = mid+1;
        }
       } 
       if(result==0)return -1;
       return result;
    }
};