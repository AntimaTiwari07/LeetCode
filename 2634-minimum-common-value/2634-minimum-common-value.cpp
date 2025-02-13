class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> first;
        unordered_map<int, int> second;
        for (int i = 0; i < nums1.size(); i++) {
            first[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            second[nums2[i]]++;
        }
        for(int i = 0;i<nums1.size();i++){
            if(first[nums1[i]]>=1 && second[nums1[i]]>=1){
                return nums1[i];
            }
        }
        return -1;
    }
};