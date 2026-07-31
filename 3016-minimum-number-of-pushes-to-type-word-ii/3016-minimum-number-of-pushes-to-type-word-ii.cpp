class Solution {
public:
    int minimumPushes(string word) {
        sort(word.begin(),word.end());
        priority_queue<int>pq;
        char ch = word[0];
        int cnt = 1;
        for(int i = 1;i<word.size();i++){
          if(word[i]==ch){
            cnt+=1;   
          }
          else{
           pq.push(cnt);
           cnt = 1;
          }
           ch = word[i];
        }
            pq.push(cnt);
           
        cnt = 0;
        int level = 1;
        int ans = 0;
        while(!pq.empty()){
            int times = pq.top();
           
            pq.pop();
             cnt+=1;
              ans += (times*level); 
            if(cnt%8==0){
                level+=1;
                
            } 
        }
        return ans;
    }
};