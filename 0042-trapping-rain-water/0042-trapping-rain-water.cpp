class Solution {
public:
    int trap(vector<int>& height) {
        /*
        brute force
        int ans = 0;
        for(int i= 0;i<height.size();i++){
            int right_max = height[i];
            int left_max = height[i];
            //check for left max building
            for(int j = 0;j<i;j++){
                if(height[j]>left_max){
                    left_max = height[j];
                }
            }
           //check for right max building
           for(int k = i+1;k<height.size();k++){
            if(height[k]>right_max){
                right_max = height[k];
            }
           }
           ans = ans + (min(left_max,right_max)-height[i]);
        }
        return ans;
        */
     int ans = 0;
     int max_height = INT_MIN;
     int max_height_index = -1;
     for(int i = 0;i<height.size();i++){
         if(height[i]>max_height){
            max_height = height[i];
            max_height_index = i;
         }
     }
     for(int i = 0;i<height.size();i++){
        int right_max = height[i];
        int left_max = height[i];
        if(i<=max_height_index){
            right_max = max_height;
            for(int j = 0;j<i;j++){
             if(height[j]>left_max){
                    left_max = height[j];
                }
            }
        }
        else{
            left_max = max_height;
            for(int k = i+1;k<height.size();k++){
            if(height[k]>right_max){
                right_max = height[k];
            }
           }
        }
         ans = ans + (min(left_max,right_max)-height[i]);
     }
          return ans;
    }
};