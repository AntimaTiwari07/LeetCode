class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        for(int i = 0;i<arr.size();i++){
            for(int j = i+1;j<arr.size();j++){
                if(abs(arr[i]-arr[j])>a)continue;
                for(int k = j+1;k<arr.size();k++){
                   if(abs(arr[i]-arr[k])>c)continue;
                   if(abs(arr[j]-arr[k])>b)continue;
                   count+=1;
                }
            }
        }
        return count;

    }
};