class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {      
         vector<vector<int>>permuatation;
        sort(nums.begin(),nums.end());
        permuatation.push_back(nums);       
        while( next_permutation(nums.begin(),nums.end())){
             permuatation.push_back(nums);
        }
           return permuatation;
    }
};