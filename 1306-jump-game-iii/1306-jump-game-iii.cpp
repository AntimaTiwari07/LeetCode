class Solution {
public:
bool jump(vector<int>& arr, int i,vector<bool>&vis){
    if(i>=arr.size() || i<0)return false;
    if(arr[i]==0)return true;
    bool take = false;bool take2 = false;
    vis[i] = true;
    if(i+arr[i] <arr.size() && !vis[i+arr[i]]) take = jump(arr,i+arr[i],vis);
    if(i-arr[i]>=0 && !vis[i-arr[i]]) take2 = jump(arr,i-arr[i],vis);
    return  take || take2;
}
    bool canReach(vector<int>& arr, int start) {
        vector<bool>vis(arr.size(),false);
        return jump(arr,start,vis);
    }
};