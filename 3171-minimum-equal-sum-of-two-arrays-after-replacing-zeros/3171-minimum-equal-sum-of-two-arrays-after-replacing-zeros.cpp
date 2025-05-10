class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long count = 0;
        long long sum = 0;
        long long sum2 = 0;
        long long cnt = 0;
        for(int i = 0;i<nums1.size();i++){
            if(nums1[i]==0)count+=1;
            sum+=nums1[i];
        }
        for(int i = 0;i<nums2.size();i++){
            sum2+=nums2[i];
            if(nums2[i]==0)cnt+=1;
        }
        if(sum==sum2 && cnt==0 && count==0 )return sum;
           if(cnt!=0 && count!=0)return max(sum+count,sum2+cnt);
        else{
          if(sum>=sum2 && cnt!=0){
            if(sum2+cnt<=sum+count)return (sum+count);
          }
          if(sum<=sum2 && count!=0){
            if(sum+count<=sum2+cnt)return (sum2+cnt);
          }
        }
     return -1;
    }
};