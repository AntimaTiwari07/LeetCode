class Solution {
public:
    int strStr(string haystack, string needle) {
     int i = 0;
     int j = 0;
     int idx = INT_MAX;
     while(j<haystack.size()){
        if(haystack[j]==needle[0]){
            idx = j;
            i = 0;
            while(i<needle.size() && (i+j)<haystack.size()&&haystack[i+j]==needle[i]){
            i++;
        }
        if(i==needle.size()){return idx;}
        }
         j++; 
     }
       return -1;
    }
};