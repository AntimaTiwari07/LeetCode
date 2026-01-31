class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int st = 0;
       int end = letters.size()-1;
       int mid;
       char ans = letters[0];
       while(st<=end){
        mid = st+(end-st)/2;
        if((int)letters[mid]-'a'>(int)target-'a'){
            ans = letters[mid];
            end = mid-1;
        }else{
            st = mid+1;
        }
       }
       return ans;
    }
};