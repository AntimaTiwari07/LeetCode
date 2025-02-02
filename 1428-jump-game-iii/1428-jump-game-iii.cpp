class Solution {
public:
bool  solve(vector<int>&arr,int idx,vector<bool>&visited){
    if(idx>arr.size()-1 || idx<0){
        return false;
    }
    if(arr[idx]==0){
        return true;
    }
    if(visited[idx]){
        return false;
    }
    visited[idx]=true;
    return solve(arr,idx+arr[idx],visited) ||  solve(arr,idx-arr[idx],visited);
    
}
    bool canReach(vector<int>& arr, int start) {
        vector<bool>visited(arr.size(),false);
       bool ans = solve(arr,start,visited);
       if(ans)return true;
       return false;
    } 
};