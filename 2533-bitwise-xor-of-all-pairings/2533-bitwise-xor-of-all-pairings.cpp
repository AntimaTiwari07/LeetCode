class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
       if(nums1.size()%2==0 && nums2.size()%2==0){
      return 0;
       }
       else{
        int x = 0;
        if(nums1.size()%2!=0 &&nums2.size()%2==0){
            for(int i = 0;i<nums2.size();i++){
            x^=nums2[i];
        }
        for(int j = 0;j<nums1.size();j++){
          ans^=x;
        }
       }
       else if(nums1.size()%2==0 && nums2.size()%2!=0) {
        int x = 0;
            for(int i = 0;i<nums1.size();i++){
            x^=nums1[i];
        }
        for(int j = 0;j<nums2.size();j++){
          ans^=x;
        }
       }
       else{
         int x = 0;
            for(int j = 0;j<nums2.size();j++){
                x^=nums2[j];
        }
        for(int i = 0;i<nums1.size();i++){
             ans^=(nums1[i]^x);
        }
       }
       }
       return ans;
    }
};