class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even = 0;
        int odd =0;
        for(int i =0;i<nums1.size();i++){
            if(nums1[i]%2==0)even+=1;
            else odd+=1;
        }
        return true;
    }
};