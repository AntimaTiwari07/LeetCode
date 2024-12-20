class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxpos = INT_MIN;
        int chunks = 0;
      for(int i = 0;i<arr.size();i++){
        maxpos = max(maxpos,arr[i]);
        if(maxpos==i) {
            chunks++;
                   }
      }
      return chunks;
        }
};