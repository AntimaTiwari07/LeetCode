class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum =0;
        int cnt = 0;
        int i = 0,j = 0;
        while(j<arr.size()){
            sum+=arr[j];
            if(j-i+1==k){
                if(sum/k>=threshold)cnt++;
                sum-=arr[i];
                i++;
            }
            j++;
        }
        return cnt;
    }
};