class Solution {
public:
  void heapify(vector<int>&nums,int i,int n){
            int largest_index = i;
            int leftindex = 2*largest_index+1;
            int rightindex = 2*largest_index+2;
            if(leftindex<n && nums[largest_index]<nums[leftindex]){
                largest_index = leftindex;
            }
            if(rightindex<n && nums[largest_index]<nums[rightindex]){
                largest_index = rightindex;
            }
            if(largest_index!=i){
                swap(nums[largest_index],nums[i]);
                heapify(nums,largest_index,n);
            }
            
        }
    int findKthLargest(vector<int>& nums, int k) {
        /*
        int max = INT_MIN;
          int lar = INT_MAX;
      for(int i = 0;i<k;i++){
           max = INT_MIN;
          for(int j = 0;j<nums.size();j++){
              if((nums[j]>max)&&(nums[j]<lar)){ 
                  max = nums[j];
              }         
      }
          lar = max;
      }
        return lar;
        */
        //heapify
        for(int i = (nums.size()/2)-1;i>=0;i--){
            heapify(nums,i,nums.size());
        }
        for(int i = 0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        //heap sort
        int size = nums.size();
        int ans;
        while(k>0){
             ans  = nums[0];
            swap(nums[0],nums[size-1]); 
            size-=1;
             heapify(nums,0,size);
            k-=1;
        }
        
        return ans;
    }
};