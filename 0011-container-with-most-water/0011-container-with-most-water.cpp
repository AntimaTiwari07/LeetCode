class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxsize = INT_MIN;
        int i = 0;
        int j = n-1;
        unordered_map<int,int>mp;
        while(i<j){
            if(height[i]<height[j]){
                mp[height[i]] = max(mp[height[i]],height[i]*(j-i));
                i++;
            }
            else{
                 mp[height[j]] = max(mp[height[j]],height[j]*(j-i));
                 j--;
            }
        }

    //    unordered_map<int,int>mp1;
    //    i =0;
    //    j = n-1;
    //     while(i<j){
    //         if(height[i]<=height[j]){
    //             mp1[height[i]] = max(mp[height[i]],height[i]*(j-i));
    //             i++;
    //         }
    //         else{
    //              mp1[height[j]] = max(mp[height[j]],height[j]*(j-i));
    //              j--;
    //         }
    //     }

        for(auto i:mp){
            // if(i.second == mp1[i.first]){
            //     maxsize = max(maxsize,i.second);
            // }
            // else{
            //     maxsize = max(maxsize,i.second+mp1[i.first]);
            // }
            maxsize = max(maxsize,i.second);
        }
        return maxsize;
    }
};