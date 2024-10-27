class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        int sum1 = 0;
        int sum2 = 0;
       vector<int>sum1max;
       vector<int>sum2max;
        for(int j = 0;j<=nums.size()-firstLen;j++){
            sum1 = 0;
        for(int i = 0;i<firstLen;i++){
               sum1  = sum1 +nums[j+i];
        }
         sum1max.push_back(sum1);
    }
     for(int j = 0;j<=nums.size()-secondLen;j++){
        sum2=0;
        for(int i = 0;i<secondLen;i++){
               sum2 +=nums[j+i];
        } 
         sum2max.push_back(sum2);
    }
    
    int max_num = 0;
    
    for(int i =0;i<sum1max.size();i++){
        for(int j=0;j<sum2max.size();j++){
            if(j>=(i+firstLen) || i>=(j+secondLen))
            max_num = max(max_num,sum1max[i]+sum2max[j]);
        }
        }
    return max_num;
    }
};