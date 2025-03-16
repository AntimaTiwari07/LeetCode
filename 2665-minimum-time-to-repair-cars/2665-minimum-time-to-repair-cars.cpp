class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        sort(ranks.begin(),ranks.end());
        long long st = 1;
        long long end = 1LL*cars*cars*ranks[0];
        long long mid;
        long long ans = 0;
        while(st<=end){
            mid = st+(end-st)/2;
            long long total_car= 0;
            for(int i = 0;i<ranks.size();i++){
                total_car+=(int)(sqrt(mid/ranks[i]));
            }
            if(total_car>=cars){
                ans = mid;
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    }
};