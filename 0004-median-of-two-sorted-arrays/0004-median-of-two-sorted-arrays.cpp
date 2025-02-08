class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int>num(m+n);
        int k = 0;
        int  i =0;
        int j = 0;
        while((i<m) && (j <n)){
           if(nums1[i]<nums2[j]){
            num[k]=nums1[i];
            i++;
            k++;
           }
           else {
            num[k]=nums2[j];
            j++;
            k++;
           }
        }
           while(i<m){
            num[k]=nums1[i];
            i++;
            k++;
           }
           while(j<n){
            num[k]=nums2[j];
            j++;
            k++;
           }
           int mid = (m+n)/2;
           if((m+n)%2==1){
            return num[mid];
           }
           else{
            int mid1 = (m+n)/2 -1;
            int mid2 = (m+n)/2;
            
            return (num[mid1]+num[mid2])/2.0;
           }

        
    }
};