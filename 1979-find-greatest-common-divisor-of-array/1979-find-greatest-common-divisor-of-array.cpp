class Solution {
public:
int gcdd(int a,int b){
    if(a==0)return b;
    if(b==0)return a;
    if(a<b)swap(a,b);
    return gcdd(a%b,b);
}
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return gcdd(nums[0],nums[nums.size()-1]);
    }
};