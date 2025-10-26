class Bank {
public:
    vector<long long>bal;
    Bank(vector<long long>& balance) {
        for(int i = 0;i<balance.size();i++){
            bal.push_back(balance[i]);
        }
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(account1>=1 && account1<=bal.size() && account2>=1 && account2<=bal.size()){
        if(bal[account1-1]<money)return false;
         bal[account2-1] = bal[account2-1]+money;
          bal[account1-1] = bal[account1-1]-money;
        
       return true;
        }
        else return false;
    }
    
    bool deposit(int account, long long money) {
          if(account>=1 && account<=bal.size()){
                bal[account-1]+=money;
               
                return true;
          }
          else return false;
    }
    
    bool withdraw(int account, long long money) {
         if(account>=1 && account<=bal.size()){
            if(bal[account-1]<money)return false;
            bal[account-1]-=money;
             
            return true;
         }else return false;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */