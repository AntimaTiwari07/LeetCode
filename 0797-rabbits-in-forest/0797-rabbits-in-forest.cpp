class Solution {
public:
    int numRabbits(vector<int>& answers) {
       int count =0;
      unordered_map<int,int>mp;
       for(int i = 0;i<answers.size();i++){
       mp[answers[i]]++;
       } 
       for(auto i:mp){
        if(i.first==0){
           count+=(i.second); 
        }
        else if(i.first>=i.second){
            count+=(i.first+1);
        }
        else{
             int total = i.first+1;
             if(i.second % total !=0){
                 count += (i.second / total)*total + total;
             }
             else
             count += (i.second / total)*total ;
        }
       }
       return count;
    }
};