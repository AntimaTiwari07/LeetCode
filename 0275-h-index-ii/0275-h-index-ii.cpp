class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.size()==1 && citations[0]!=0) return 1;
        int st = 1;
        int end = citations.size();
        int mid = 0;
        int ans =0;
        while(st<=end){
            mid = st+(end-st)/2;
            int low = 0;
            int high = citations.size()-1;
            int midd ;
            int index = -1;
            long long count = 0;
            while(low<=high){
                midd = low+(high-low)/2;
                if(citations[midd]>=mid){
                    index = midd;
                    high = midd-1;
                }
                else {low = midd+1;}
            }
            if(index!=-1)count = citations.size()-index;
            if(count>=mid){
                ans = mid;
                st = mid+1;
            }
            else{end = mid-1;}
        }
        return ans;
    }
};