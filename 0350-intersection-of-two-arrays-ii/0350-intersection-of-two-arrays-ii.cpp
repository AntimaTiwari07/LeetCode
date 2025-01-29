class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      int count1[10001]={0};
      int count2[10001]={0};
      vector<int>ans;
       for(int i =0;i<nums1.size();i++){
        count1[nums1[i]]++;
       }
       for(int j = 0 ;j<nums2.size();j++){
        count2[nums2[j]]++;
       }
      for(int i = 0;i<10001;i++){
        if((count1[i]!=0 && count2[i]!=0 )&&(count1[i]==count2[i] || count1[i]<count2[i])){
            for(int j = 0;j<count1[i];j++){
                ans.push_back(i);
            }
        }
        else if((count1[i]!=0 && count2[i]!=0 )&& (count1[i]>count2[i])){
             for(int j = 0;j<count2[i];j++){
                ans.push_back(i);
            }
        }
      }
      return ans;
    }
};