class Solution {
public:
void s(vector<int>& nums,int i,int &ans){
    if(i==nums.size()){
        return;
    }
    
}
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
    for(int i = 0;i<nums.size();i++){
         int cnt = 0;
    int sum = 0;
    for(int j = 1;j<=nums[i];j++){
        if(nums[i]%j==0){
            sum+=j;
            cnt+=1;
        }
        if(cnt>4)break;
    }
    if(cnt==4){
        ans+=sum;
    }
    }
    return ans;
    }
};