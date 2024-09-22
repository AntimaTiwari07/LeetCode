class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*
        //my first approach (brute force)
        int ans = 0;
        //to count no. of element
        int count ;
        //iterate through each no;
        for(int i = 0;i<nums.size();i++){
            count = 0;
            //check if equal or not
            for(int j = i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            //check count is greater then n/2
            if((count+1)>((nums.size()-1)/2)){
                    ans = nums[i];
                    break;
            } 
        }
        return ans;
        */
        int freq = 0,ans=0;
        for(int i = 0;i<nums.size();i++){
            if(freq==0){
                ans = nums[i];
            }
            if(ans==nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
    }
};