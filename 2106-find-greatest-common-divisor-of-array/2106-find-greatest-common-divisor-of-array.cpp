class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = nums[0];
        int b = nums[nums.size()-1];
        //to fing gcd
        while(b>0){
            if(a<b){
                swap(a,b);
                a = a % b;
            }
            else{
                a = a%b;
            }
            if(a==0){
                return b;
            }

        }
        return 1;
    }
};