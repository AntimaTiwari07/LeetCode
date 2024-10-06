class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        sort(quantities.begin(),quantities.end());
        int start = 1;
        int end =  quantities[quantities.size()-1];
        int mid ;
        int ans = 0;
        int retail = 0;
        while(start<=end){
    mid = start+(end-start)/2;
    retail = 0;
    for(int i = 0;i<quantities.size();i++){
        if(quantities[i]%mid==0){
            retail = retail + quantities[i]/mid;
        }
        else{
             retail = retail + (quantities[i]/mid + 1);
        }
    }
            if(retail <= n){
                ans  = mid;
                end = mid -1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};