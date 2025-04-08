class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector<bool>v(101,false);
        int op= 0;
        for(int i =0;i<nums.size();i++){
            bool valid= false;
           for(int j =0;j<nums.size();j++){
            if(!v[nums[j]]){
                v[nums[j]] = true;
                valid = true;
            }
            else{
                 op+=1;
                if(nums.size()>=3)
                nums.erase(nums.begin(),nums.begin()+3);
                else{
                nums.erase(nums.begin(),nums.begin()+nums.size());
                }
                valid = false;
                  break;
           }
        }
        if(valid)return op;
        i--;
        for(int i = 0;i<101;i++){
            v[i]=false;
        }
        }
        return op;
    }
};
