class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            int max = arr[i];
            for(int j = i;j<=max;j++){
                if(arr[j]>max) {
                    max = arr[j];
                }
                if(j == max){
                    i = max;
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};