class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
    for(int i = 0;i<arr.size();i++){
        int st = 0;
        int end = arr.size()-1;
        int mid;
        while(st<=end){
            mid = st+(end-st)/2;
            if(mid!=i &&  arr[mid]*2==arr[i] )
                return true;
                else if(arr[mid]*2<arr[i]){
                    st = mid+1;
                }
                else {
                    end = mid-1;
                }
        } 
    }
    return false;
    }
};