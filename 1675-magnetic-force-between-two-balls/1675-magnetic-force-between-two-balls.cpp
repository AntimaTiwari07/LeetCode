class Solution {
public:
 
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
       int start = 1;
       int end = position.back()-position.front();
       int mid;
       int ans = 0;
       while(start<=end){
        mid = start +(end-start)/2;
         int balls=1;
         int prev_val = position[0];
        for(int index = 1;index<position.size();index++){
           if((position[index]-prev_val)>=mid){
            balls++;
              prev_val = position[index];
              
           }
        }
        cout<<balls<<endl;
        if(balls >= m){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
       }
       
       return ans;
         }
};