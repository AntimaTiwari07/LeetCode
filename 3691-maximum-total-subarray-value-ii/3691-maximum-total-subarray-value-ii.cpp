class Solution {
public:
int traverse(int st,int end,int i,vector<int>&segmenttree,int x,int y,bool & maxi){
  if(y<st || x>end){
    if(maxi)return INT_MIN;
    else return INT_MAX;
  }
  if(st>=x && end<=y)return segmenttree[i];
  int mid = st+(end-st)/2;
  int left = traverse(st,mid,2*i+1,segmenttree,x,y,maxi);
  int right = traverse(mid+1,end,2*i+2,segmenttree,x,y,maxi);
  if(maxi) return max(left,right);
  return min(left,right);
}
void segment_tree(vector<int>& nums,int i,int st,int end,vector<int>&x,bool &maxi){
   if(st==end){
    x[i] = nums[st];
    return;
   }
   int mid = st+(end-st)/2;
    segment_tree(nums,2*i+1,st,mid,x,maxi);
    segment_tree(nums,2*i+2,mid+1,end,x,maxi);
    if(maxi) x[i] = max(x[2*i+1],x[2*i+2]);
    else x[i] = min(x[2*i+1],x[2*i+2]);
}


    long long maxTotalValue(vector<int>& nums, int k) {
        // segment tree 

      vector<int>maxii(nums.size()*4);
      vector<int>minii(nums.size()*4);
      bool maxi = true;
      segment_tree(nums,0,0,nums.size()-1,maxii,maxi);
      maxi= false;
      segment_tree(nums,0,0,nums.size()-1,minii,maxi);
      priority_queue<pair<long long,pair<int,int>>>pq;
      //intial maximum values of sum
      int n = nums.size()-1;
      for(int l = 0;l<nums.size();l++){
        maxi = true;
         int maxval = traverse(0,n,0,maxii,l,n,maxi);
         maxi = false;
         int minval = traverse(0,n,0,minii,l,n,maxi);
         
         pq.push({(long long)maxval-minval,{l,n}});
      }
      long long sum =0;
      while(k>0){
       pair<long long,pair<int,int>>p= pq.top();
       pq.pop();
       sum+=p.first;
       pair<int,int>idx = p.second;
        maxi = true;
         int maxval = traverse(0,n,0,maxii,idx.first,idx.second-1,maxi);
         maxi = false;
         int minval = traverse(0,n,0,minii,idx.first,idx.second-1,maxi);
       
         pq.push({(long long)maxval-minval,{idx.first,idx.second-1}});
         k--;
      }
      return sum;
    }
};