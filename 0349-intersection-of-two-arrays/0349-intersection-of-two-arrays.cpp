class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int n = nums1.size();
       int m = nums2.size();
        vector<int>v;
       sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
        for(int i  = 0;i<n;i++){
            int st = 0;
            int end = m-1;
            int mid ;
            while(st<=end){
                mid = st+(end-st)/2;
                if(nums2[mid]==nums1[i]){
                   v.push_back(nums1[i]);
                    break;
                }
                else if(nums2[mid]<nums1[i]){
                    st = mid+1;
                }
                else{
                    end = mid-1;
                }
            }
        }
      
      sort(v.begin(),v.end());
      for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v.size()-1;j++){
            if(v[j]==v[j+1]) v.erase(v.begin()+j);
        }
      }
       return v;
    }
};