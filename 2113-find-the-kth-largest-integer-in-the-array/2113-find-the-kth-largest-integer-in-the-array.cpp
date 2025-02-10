class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        //sort in increasing order
        auto lambda = [](string &a,string &b){
            if(a.size()!=b.size())return a.size()<b.size();
             return a<b;
        };
        //to sort in decreasing order just swap and b in parameter remaining things is same
        sort(nums.begin(),nums.end(),lambda);
        int diff = nums.size()-k;
           return nums[diff];
    }
};