class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int st = 0;
        int end = asteroids.size()-1;
        int mid = -1;
        int idx = -1;
        while(st<=end){
            mid = st+(end-st)/2;
            if(asteroids[mid]<=mass){
                idx = mid;
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        if(idx==-1)return false;
        long long cnt = mass+ asteroids[idx];
        for(int i = 0;i<idx;i++){
            if(cnt>=asteroids[i])cnt+=asteroids[i];
        }
        for(int j = idx+1;j<asteroids.size();j++){
           if(cnt<asteroids[j])return false;
           cnt+=asteroids[j];
        }
        return true;
    }
};