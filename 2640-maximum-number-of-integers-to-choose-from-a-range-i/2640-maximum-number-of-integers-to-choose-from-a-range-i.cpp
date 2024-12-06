class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {  
        sort(banned.begin(),banned.end());     
      int sum = 0;
      int index = 0;
      int count = 0;
      bool valid = true;
      for(int i = 1;i<=n;i++){
          valid = true;
        int st = 0;
        int end = banned.size()-1;
        int mid;
        while(st<=end){
            mid = st+(end-st)/2;
            if(banned[mid]==i){
                 valid = false;
                 break;
            }
            else if(i<banned[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
             if(valid && sum+i<=maxSum){
                    count++;
                    sum+=i;
                }
            if(sum>maxSum){
                    break;
                }
        }
      
      return count;
    }
};