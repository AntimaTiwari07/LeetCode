class Solution {
public:
int gcdd(int a,int b){
    if(a==0)return b;
    if(b==0)return a;
    if(a<b){
        swap(a,b);
    }
    return gcdd(a%b,b);
}
    long long gcdSum(vector<int>& nums) {
        vector<int>prefixgcd(nums.size());
        int maxi = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
            prefixgcd[i] = gcdd(nums[i],maxi);
        }
        sort(prefixgcd.begin(),prefixgcd.end());
        int i = 0;
        int j = prefixgcd.size()-1;
        long long sum = 0;
        while(i<j){
           sum+= gcdd(prefixgcd[i],prefixgcd[j]);
           i++;
           j--;
        }
        return sum;
    }

};