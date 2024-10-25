class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>v(10000,0);
        vector<int>temp;
        for(int i = 0;i<arr.size();i++){
            v[arr[i]]=1;
        }
        for(int i = 1;i<v.size();i++){
            if(v[i]==0){
                temp.push_back(i);
            }
        }
        for(int i = 0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        return temp[k-1];
    }
};