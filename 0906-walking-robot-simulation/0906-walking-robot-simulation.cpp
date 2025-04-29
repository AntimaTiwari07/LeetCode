class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        map<pair<int,int>,int>mp;
        for(int i = 0;i<obstacles.size();i++){
            mp[{obstacles[i][0],obstacles[i][1]}]=1;
        }
        int x = 0;
        int y = 0;
         char ch = 'n';
        int maxdis= 0;
        for(int i = 0;i<commands.size();i++){
            if(commands[i]>=1 && commands[i]<=9 ){
                bool found = false;
                int cnt = commands[i];
                if(ch == 'n'){
                     while(cnt>0){
                        y+=1;
                         if(mp[{x,y}]==1){y = y-1;break;}
                       cnt--;
                     }        
              }
                else if(ch=='e'){
                      while(cnt>0){
                        x+=1;
                         if(mp[{x,y}]==1){x = x-1;break;}
                       cnt--;
                     }   
                }
                else if(ch=='w'){
                      while(cnt>0){
                        x-=1;
                         if(mp[{x,y}]==1){x = x+1;break;}
                       cnt--;
                     }   
                }
                else if(ch=='s'){
                      while(cnt>0){
                        y-=1;
                         if(mp[{x,y}]==1){y = y+1;break;}
                       cnt--;
                     }   
            }
            }
            else if(commands[i]==-1){
                if(ch=='n') ch = 'e';
                else if(ch=='e') ch = 's';
                else if(ch=='s') ch = 'w';
                else if(ch=='w') ch = 'n';
            }
            else if(commands[i]==-2){
                if(ch=='n') ch = 'w';
                else if(ch=='w') ch = 's';
                else if(ch=='s') ch = 'e';
                else if(ch=='e') ch = 'n';
            }
             cout<<ch<<endl;
            cout<<"x = "<<x <<" y = "<<y<<endl;
            maxdis = max(maxdis,(int)(pow(x,2)+pow(y,2)));
        }
        return maxdis;
    }
};