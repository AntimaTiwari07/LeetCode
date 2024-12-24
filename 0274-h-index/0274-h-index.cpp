class Solution {
public:
    int hIndex(vector<int>& citations) {
     sort(citations.begin(),citations.end());
     if(citations.size()==1 && citations[0]!=0)return 1;
     int st = 1;
     int end = citations.size();
     int mid;
     int ans  =0;
     while(st<=end){
        mid = st+(end-st)/2;
        int count = 0;
        for(int i = 0;i<citations.size();i++){
            if(citations[i]>=mid)count++;
        }
        if(count>=mid){
            ans = mid;
            st = mid+1;
        }
        else{
            end = mid-1;
        }
     } 
     return ans;  
    }
};