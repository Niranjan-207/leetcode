// Last updated: 4/4/2026, 11:01:10 PM
class Bank {
public:
    vector<long long> balance;
    int n;
    bool isValid(int account) {
        return account >= 1 && account <= n;
    }

    Bank(vector<long long>& bal) {
        balance=bal;
        n=bal.size();
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(isValid(account1) && isValid(account2) && balance[account1-1]>=money){
            balance[account1-1]-=money;
            balance[account2-1]+=money;
            return true;
        }
        return false;
    }
    
    bool deposit(int account, long long money) {
        if(isValid(account)){
            balance[account-1]+=money;
            return true;
        }
        return false;
    }
    
    bool withdraw(int account, long long money) {
        if(isValid(account) && balance[account-1]>=money){
            balance[account-1]-=money;
            return true;
        }
        return false;
    }

};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */