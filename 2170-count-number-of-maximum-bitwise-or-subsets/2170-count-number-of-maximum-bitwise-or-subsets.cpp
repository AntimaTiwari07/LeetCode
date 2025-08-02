class Solution {
public:
int subset(vector<int>& nums,long long x,long long &maxi,int i){
    if(i==nums.size()){
       if(x==maxi)return 1;
        else return 0 ;
    }
    int take = subset(nums,(x|nums[i]),maxi,i+1);
   int not_t =  subset(nums,x,maxi,i+1);
   return take+not_t ;
}
    int countMaxOrSubsets(vector<int>& nums) {
        long long maxi = 0;
        for(int i = 0;i<nums.size();i++){
            maxi = (maxi | nums[i]);
        }
        return subset(nums,0,maxi,0);
    }
};