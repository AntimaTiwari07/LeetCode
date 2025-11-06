class Solution {
public:
long long sum = 0;
set<pair<int,int>>main;//fixef sixe of x
set<pair<int,int>>sec; //remaining pair innsert
  void insertintoset(const pair<int,int>&p,int &x){
    if(main.size()<x || p>*main.begin()){
        main.insert(p);
        sum+= 1LL*p.first*p.second;
        
        if(main.size()>x){
            auto smallest = *main.begin();
            sum-= 1LL*smallest.first*smallest.second;
            main.erase(smallest);
            sec.insert(smallest);
        }
    }
    else{
        sec.insert(p);
    }
  }

  void removefromset(const pair<int,int>&p,int &x){
    if(main.find(p)!=main.end()){
        sum-=1LL*p.first*p.second;
        main.erase(p);
        if(!sec.empty()){
        auto largest = *sec.rbegin();
        sec.erase(largest);
        main.insert(largest);
        sum+= 1LL*largest.first*largest.second;       
        }
    }
    else{
        sec.erase(p);
    }
  }

    vector<long long> findXSum(vector<int>& nums, int k, int x) {
        vector<long long>ans;
        unordered_map<int,int>mp;
        sum = 0;
int i = 0;int j = 0;
       while( j<nums.size()){
        if(mp[nums[j]]>0){
            removefromset({mp[nums[j]],nums[j]},x);
        }
             mp[nums[j]]++;
             insertintoset({mp[nums[j]],nums[j]},x);
        
        if(j-i+1==k){
            ans.push_back(sum);

            removefromset({mp[nums[i]],nums[i]},x);
            mp[nums[i]]--;
            if(mp[nums[i]]==0){
                mp.erase(nums[i]);
            }
            else{
                insertintoset({mp[nums[i]],nums[i]},x);
            }
            i++;
        }
        j++;
       }
       return ans;
    }
};