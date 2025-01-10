class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int n = nums1.size();
       int m = nums2.size();
       set<int>s;
       sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
        for(int i  = 0;i<n;i++){
            int st = 0;
            int end = m-1;
            int mid ;
            while(st<=end){
                mid = st+(end-st)/2;
                if(nums2[mid]==nums1[i]){
                    if(s.find(nums1[i])==s.end()) s.insert(nums1[i]);
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
       vector<int>v;
       for(auto i :s){
        v.push_back(i);
       }
       return v;
    }
};