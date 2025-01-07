class Solution {
public:
 /*
 brute force approach using recursion 

 long long solve(vector<int>nums1,vector<int>nums2,long long sum,long long count,int mini,int i,int k){
    
    if(i==nums1.size()){
        if(count==k){
            return sum*mini;
        }
        return INT_MIN;
    }
    if(count>k)return INT_MIN;
    //take
    long long take = solve(nums1,nums2,sum+nums1[i],count+1,min(mini,nums2[i]),i+1,k);
    //skip
    long long skip = solve(nums1,nums2,sum,count,mini,i+1,k);
      return max(take,skip);
 }
 */
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        /*
       int ans = solve(nums1,nums2,0,0,INT_MAX,0,k);
       cout<<ans<<endl;
       return ans;
       */
       int n= nums1.size();
       vector<pair<int,int>>v(n);

    priority_queue<int,vector<int>,greater<int>>pq;//min  heap

    auto lambda =[&](auto &p1,auto &p2){
        return(p1.second>p2.second);
    };
       // we have to find maximum score so i have to select max element in nums2
       for(int i = 0;i<n;i++){
        v[i]={nums1[i],nums2[i]};
        }
      sort(begin(v),end(v),lambda);
      

long long sum = 0;
for(int j = 0;j<=k-1;j++){
    sum+=v[j].first;
    pq.push(v[j].first);
    
}
long long score = sum*v[k-1].second;
for(int i = k;i<n;i++){
  sum =  sum+ v[i].first -pq.top();
  pq.pop();
  pq.push(v[i].first);
  score = max(score,sum*v[i].second); 
}
return score;
    }
};