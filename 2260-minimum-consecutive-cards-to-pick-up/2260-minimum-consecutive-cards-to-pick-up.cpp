class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
       int i = 0;
       int j = 0;
       int mini = INT_MAX;
       unordered_map<int,int>mp;
       while(j<cards.size()){
          mp[cards[j]]++;
          while(mp[cards[j]]>1){
             mini = min(mini,j-i+1);
             mp[cards[i]]--;
             i++;
          }
          j++;
       } 
       if(mini==INT_MAX)return -1;
       return mini;
    }
};