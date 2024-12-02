class Solution {
public:
void heapify(vector<int>& nums,int size,int index){
    int largest_index = index;
    int leftnode = 2*(index)+1;
    int rightnode = 2*(index)+2;
   
    if(leftnode<size && nums[largest_index]<nums[leftnode]){
            largest_index = leftnode;
    }
    if(rightnode<size && nums[largest_index]<nums[rightnode]){
        largest_index = rightnode;
    }
    if(largest_index!=index){
          swap(nums[largest_index],nums[index]);
           heapify(nums,size,largest_index);
    }
}
    vector<int> sortArray(vector<int>& nums) {
        int size = nums.size();
        //heap create
    for(int i = size/2-1;i>=0;i--){
        heapify(nums,size,i);
    }
    //heap sort 
    while(size>0){
        swap(nums[0],nums[size-1]);
        size = size-1;
        heapify(nums,size,0);
    }
      
       return nums;
    }
};