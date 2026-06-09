class Solution {
public:
void segment_tree(vector<int>& nums,int i,int st,int end,vector<int>&x,bool &maxi){
    if(st==end){
      x[i] = nums[st];
      return;
    }
    int mid = st+(end-st)/2;
    segment_tree(nums,2*i+1,st,mid,x,maxi);
    segment_tree(nums,2*i+2,mid+1,end,x,maxi);
    if(maxi)x[i] = max(x[2*i+1],x[2*i+2]);   
    else  x[i] = min(x[2*i+1],x[2*i+2]); 
}
    long long maxTotalValue(vector<int>& nums, int k) {
        vector<int>maxi(nums.size()*4);
        vector<int>mini(nums.size()*4);
        bool maxii = true;
        segment_tree(nums,0,0,nums.size()-1,maxi,maxii);
        maxii = false;
        segment_tree(nums,0,0,nums.size()-1,mini,maxii);
        vector<long long>temp;
        for(int i = 0;i<maxi.size();i++){
           temp.push_back(maxi[i]-mini[i]);
        }
     sort(temp.begin(),temp.end());
     long long sum = 0;
     
     for(int j = 1;j<=min((int)temp.size(),k);j++){
        sum+= temp[temp.size()-j];
     }
     if(k>temp.size()) sum+= (temp[temp.size()-1]*(k-temp.size()));
     long long xx = temp[temp.size()-1]*k;
     return max(sum,xx);
    }
};