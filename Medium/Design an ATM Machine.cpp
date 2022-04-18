class ATM {
public:
    
    vector<long long int> number;
    vector<long long int> money;
    
    ATM() {
        for (int i=0; i<5; ++i) money.push_back(0);
        
        number.push_back(20);
        number.push_back(50);
        number.push_back(100);
        number.push_back(200);
        number.push_back(500);
    }
    
    void deposit(vector<int> banknotesCount) {
        for (int i=0; i<5; ++i) money[i] += banknotesCount[i];
    }
    
    vector<int> withdraw(int amount) {
        vector<int> rs(5, 0);
        
        for (int i=4; i>=0; --i) {
            if (amount == 0) break;
            
            if (amount >= number[i] && money[i] > 0) {
                int num = amount/number[i];
                rs[i] = num > money[i] ? money[i] : num;
                amount -= rs[i]*number[i];
            }
        }
        
        if (amount != 0) return vector<int>(1, -1);
        for (int i=0; i<5; ++i) money[i] -= rs[i];
        
        return rs;
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */