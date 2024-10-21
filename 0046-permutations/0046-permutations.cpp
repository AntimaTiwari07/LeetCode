class Solution {
public:
void print_per(vector<int>& nums, vector<vector<int>>&permuatation,int idx){
    if(idx==nums.size()){
        permuatation.push_back(nums);
       return;
    }
    for(int j = idx;j<nums.size();j++){
        swap(nums[idx],nums[j]);
        print_per(nums,permuatation,idx+1);
        //backtracking
        swap(nums[idx],nums[j]); 
    }
}
    vector<vector<int>> permute(vector<int>& nums) {    
        /*  
         vector<vector<int>>permuatation;
        sort(nums.begin(),nums.end());
        permuatation.push_back(nums);       
        while( next_permutation(nums.begin(),nums.end())){
             permuatation.push_back(nums);
        }
           return permuatation;
           */
           vector<vector<int>>permuatation;
            print_per(nums,permuatation,0);
          return permuatation;
    }
};