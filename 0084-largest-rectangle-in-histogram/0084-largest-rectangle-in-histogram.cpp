class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
//         int area = 0;
//      for(int i = 0;i<heights.size();i++){
//         //left max or equal to heights[i]
//         int j = i;
//         int left = 0;
//         while(j>=0){
//             if(heights[j]>=heights[i]){
//                 left+=1;
//             }
//             else break;
//             j--;
//         }
//         int k = i+1;
//         int right = 0;
//         while(k<heights.size()){
//             if(heights[k]>=heights[i]){
//                 right+=1;
//             }
//             else break;
//             k++;
//         }
//         area = max(area,heights[i]*(left+right));
//      }
// return area;
int n = heights.size();
vector<int>nse(n);
nse[n-1] = n;
vector<int>pse(n);
pse[0]= -1;
stack<int>next;
stack<int>prev;
     for(int i = 0;i<heights.size();i++){
        //next smaller ele
        while(!next.empty() && heights[next.top()]>=heights[n-i-1]){
            next.pop();
        }
        if(next.empty())nse[n-i-1] = n;
        else nse[n-i-1] = next.top();
         
        next.push(n-i-1);
       
       //prev smaller ele
       while(!prev.empty() && heights[prev.top()]>=heights[i]){
        prev.pop();
       }
       if(prev.empty())pse[i]=-1;
       else pse[i] = prev.top();

           prev.push(i);
     }
     int area = 0;
     for(int i = 0;i<n;i++){
        cout<<pse[i]<<" "<<nse[i]<<endl;
     }
     for(int i = 0;i<n;i++){
        area = max(area,heights[i]*(nse[i]-pse[i]-1));
     }
     return area;
    }
};