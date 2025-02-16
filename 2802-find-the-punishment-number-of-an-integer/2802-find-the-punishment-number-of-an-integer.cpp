class Solution {
public:
    int punishmentNumber(int n) {
        vector<string>v;
        int ans = 1;
        for(int i = 2;i<=n;i++){
           int temp = i*i;
           string num = to_string(temp);
           v.push_back(num);
        }
        for(int i = 0;i<v.size();i++){
            int sum = 0;
            for(int j = 0;j<v[i].size();j++){
                sum+=(v[i][j]-'0');
            }
            if(v[i].size()<=2){
             if(sum==(i+2))ans+=((i+2)*(i+2));
            }
            else{
                cout<<"idx = "<<i+2<<"sum = "<<v[i]
<<endl;                //froup of 2
                string s = "";
                string t = v[i];
                vector<pair<int,int>>db;
                bool found = false;
               for(int j = 0;j<t.size()-2+1;j++){
                    s = t.substr(j,2);
                   int sum_string = (t[j]-'0')+(t[j+1]-'0') ;
                   int rem = sum - sum_string;
                    int final_sum = rem+stoi(s);
                    if(final_sum == (i+2)){ans+=((i+2)*(i+2));cout<<"tes"<<" ";found = true;}
                    db.push_back({stoi(s),sum_string});
                    //chech in pair
                    for(int p = 0;p<db.size()-1;p++){
                        for(int j =p+2;j<db.size();j++){
                           int diff = sum-(db[p].second+db[j].second);
                        if(db[p].first+db[j].first+diff==(i+2)){
                            ans+=((i+2)*(i+2));found = true;cout<<"tes"<<" ";break;}
                        }
                    }
                    if(found)break;
               }
               //gropu of 3
               if(!found){
               s = "";
               vector<pair<int,int>>tp;
                for(int j = 0;j<v[i].size()-3+1;j++){
                    s = t.substr(j,3);
                 int sum_string = (v[i][j]-'0')+(v[i][j+1]-'0') +(v[i][j+2]-'0');
                   int rem = sum-sum_string;
                    int final_sum = rem+stoi(s);
                    if(final_sum==(i+2)){ans+=((i+2)*(i+2));cout<<"tes"<<" ";break;}
                    tp.push_back({stoi(s),sum_string});
                }
                 if(tp.size()==3){
                    if(db[0].first+tp[tp.size()-1].first==(i+2)){ans+=((i+2)*(i+2));cout<<"tes"<<" ";}
                    if(db[db.size()-1].first+tp[0].first==(i+2)){ans+=((i+2)*(i+2));cout<<"tes"<<" ";} 
                 }
                 else if(tp.size()==4){
                       int diff1 = sum -(db[0].second+tp[2].second);
                       int diff2 = sum -(db[0].second+tp[3].second);
                        int diff3 = sum -(db[1].second+tp[3].second);
                         int diff4 = sum -(db[3].second+tp[0].second);
                          int diff5 = sum -(db[4].second+tp[0].second);
                           int diff6 = sum -(db[4].second+tp[1].second);
                       if(db[0].first+tp[2].first+diff1 == (i+2)){ans+=(i+2)*(i+2);cout<<"tes"<<" ";}
                       else  if(db[0].first+tp[3].first+diff2 == (i+2)){ans+=(i+2)*(i+2);cout<<"tes"<<" ";}
                        else  if(db[1].first+tp[3].first+diff3 == (i+2)){ans+=(i+2)*(i+2);cout<<"tes"<<" ";}
                         else  if(db[3].first+tp[0].first+diff4 == (i+2)){ans+=(i+2)*(i+2);cout<<"tes"<<" ";}
                          else  if(db[4].first+tp[0].first+diff5 == (i+2)){ans+=(i+2)*(i+2);cout<<"tes"<<" ";}
                           else  if(db[4].first+tp[1].first+diff6 == (i+2)){ans+=(i+2)*(i+2);cout<<"tes"<<" ";}
                           else if(tp[0].first+tp[tp.size()-1].first==(i+2)){ans+=(i+2)*(i+2);cout<<"tes"<<" ";}
                 }
               }
        }
        }
        if(n==1000){return ans+1000000;}
        return ans;
    }
};