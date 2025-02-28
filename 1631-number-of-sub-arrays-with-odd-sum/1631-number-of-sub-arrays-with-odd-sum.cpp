class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int count = 0;
            long long sum = 0;
        bool odd = false;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]%2!=0){
                odd = true;
                break;
            }
        }
        if(odd){
        vector<int>v;
        v.push_back(arr[0]);
       for(int i = 1;i<arr.size();i++){
       v.push_back(arr[i]+v[i-1]);
       }
       int n = v.size();
       int noe = 0;
       int noo= 0;
       for(int i = 0;i<n;i++){
          if(v[i]%2==0){
            noe +=1;
          }
          else{
            count+=1;
            noo+=1;
          }
          if(v[i]%2==0){
            sum+=noo;
          }
          else{
            sum+=noe;
          }
        }
        }
       return (sum+count)%1000000007;
    }
};
