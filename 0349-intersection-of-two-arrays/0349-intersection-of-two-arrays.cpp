class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       int n = nums1.size();
       int m = nums2.size();
       set<int>s;
       if(n<=m){
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(nums1[i]==nums2[j]) {
                    if(s.find(nums1[i])==s.end()) s.insert(nums1[i]);
                }
            }
        }
       }
       else{
         for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(nums2[i]==nums1[j]) {
                    if(s.find(nums2[i])==s.end()) s.insert(nums2[i]);
                }
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