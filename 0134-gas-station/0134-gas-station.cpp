class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) { 
        if(gas.size()==1 && gas[0]==cost[0])return 0;                  
         bool valid = true;
         int ans = -1;
         int i = 0;
         while(i<gas.size()){
        if(i<gas.size()&&gas[i]>cost[i]){
               int start = i;
            int tank = gas[start];
            int end = (start+1)%gas.size();
           valid = true;
            while(end!=start){
                 tank = tank - cost[(gas.size()+end-1)%gas.size()] + gas[end];
                if(tank>=cost[end]){
                   end = (end+1)%gas.size();
                   valid = true;
                }
                else{
                    valid = false;
                    i = max(i,end);
                    break;
                }
            }
            if(valid) {return i;}
        }
        i++;
         }
        return ans;
        /*
        for(int i = 0;i<idx.size();i++){
            int start = idx[i];
            int tank = gas[start];
            int end = (start+1)%gas.size();
           valid = true;
            while(end!=start){
                 tank = tank - cost[(gas.size()+end-1)%gas.size()] + gas[end];
                if(tank>=cost[end]){
                   end = (end+1)%gas.size();
                   valid = true;
                }
                else{
                    valid = false;
                    break;
                }
            }
            if(valid) {ans =  start ; break;}
        }
     return ans;
     */
    }
};