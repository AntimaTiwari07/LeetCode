class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
       int maxi = INT_MIN;
       int min  = INT_MAX;
       int mini = -1;
       int maxindex = -1;
       //to find min and max
        for(int i = 0;i<arrays.size();i++){
            if(arrays[i][0]<min){
                min = arrays[i][0];
                mini = i;
            }
              if(arrays[i][(arrays[i].size()-1)]>maxi){
               maxi = arrays[i][(arrays[i].size()-1)];
               maxindex = i;
            }
        }
        cout<<min<<endl;
        cout<<maxi<<endl;
        int i = 0;
        int minans = INT_MAX;
        int maxans = INT_MIN;
      while(i<arrays.size()){
        //max
        if(i!=mini){
             if(arrays[i][(arrays[i].size()-1)]>maxans){
               maxans = arrays[i][(arrays[i].size()-1)];
            }
        }
        if(i!=maxindex){
             if(arrays[i][0]<minans){
                minans = arrays[i][0];
            }
        }
        i++;
      }
      
        return max((maxi-minans),(maxans-min));
    }
};