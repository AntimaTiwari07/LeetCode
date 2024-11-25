class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int mini = INT_MAX;
        int size = words.size();
        for(int i =0;i<words.size();i++){
           if(words[i]==target){
               int forward_dis = abs(i-startIndex);
               int backward_dis = size-forward_dis;
               mini = min(mini,min(forward_dis,backward_dis));
        }
        }
     if(mini!=INT_MAX){
        return mini;
     }
     else{
        return -1;
     }
    }
};