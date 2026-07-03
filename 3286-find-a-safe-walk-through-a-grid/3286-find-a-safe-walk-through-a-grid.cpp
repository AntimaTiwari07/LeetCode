class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        //0-1 bfs

    //   vector<vector<int>>src(grid.size(),vector<int>(grid[0].size(),INT_MAX));
    //   deque<pair<int,pair<int,int>>>dq;
    //   dq.push_front({grid[0][0],{0,0}});
    //   while(!dq.empty()){
    //     pair<int,pair<int,int>>p= dq.front();
    //     dq.pop_front();
    //     int cost = p.first;
    //     pair<int,int>x = p.second;
    //     int i = x.first,j = x.second;
    //     if(j+1<grid[0].size() && cost+grid[i][j+1]<src[i][j+1]){
    //         src[i][j+1] = cost+grid[i][j+1];
    //         (grid[i][j+1]==1)?dq.push_back({src[i][j+1],{i,j+1}}):dq.push_front({src[i][j+1],{i,j+1}});
    //     }
    //     if(i+1<grid.size() && cost+grid[i+1][j]<src[i+1][j]){
    //         src[i+1][j] = cost+grid[i+1][j];
    //         (grid[i+1][j]==1)?dq.push_back({src[i+1][j],{i+1,j}}):dq.push_front({src[i+1][j],{i+1,j}});
    //     }
    //     if(j-1>=0 && cost+grid[i][j-1]<src[i][j-1]){
    //         src[i][j-1] = cost+grid[i][j-1];
    //         (grid[i][j-1]==1)?dq.push_back({src[i][j-1],{i,j-1}}):dq.push_front({src[i][j-1],{i,j-1}});
    //     }
    //            if(i-1>=0 && cost+grid[i-1][j]<src[i-1][j]){
    //         src[i-1][j] = cost+grid[i-1][j];
    //         (grid[i-1][j]==1)?dq.push_back({src[i-1][j],{i-1,j}}):dq.push_front({src[i-1][j],{i-1,j}});
    //     }
    //   }
    //   if(health-src[grid.size()-1][grid[0].size()-1] >=1)return true;
    //   return false;


    // dijastre
     vector<vector<int>>src(grid.size(),vector<int>(grid[0].size(),INT_MAX));
     priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>dq;
     dq.push({grid[0][0],{0,0}});
      while(!dq.empty()){
        pair<int,pair<int,int>>p= dq.top();
        dq.pop();
        int cost = p.first;
        pair<int,int>x = p.second;
        int i = x.first,j = x.second;
        if(j+1<grid[0].size() && cost+grid[i][j+1]<src[i][j+1]){
            src[i][j+1] = cost+grid[i][j+1];
            dq.push({src[i][j+1],{i,j+1}});
        }
        if(i+1<grid.size() && cost+grid[i+1][j]<src[i+1][j]){
            src[i+1][j] = cost+grid[i+1][j];
            dq.push({src[i+1][j],{i+1,j}});
        }
        if(j-1>=0 && cost+grid[i][j-1]<src[i][j-1]){
            src[i][j-1] = cost+grid[i][j-1];
            dq.push({src[i][j-1],{i,j-1}});
        }
               if(i-1>=0 && cost+grid[i-1][j]<src[i-1][j]){
            src[i-1][j] = cost+grid[i-1][j];
            dq.push({src[i-1][j],{i-1,j}});
        }
      }
      if(health-src[grid.size()-1][grid[0].size()-1] >=1)return true;
      return false;

    }
};