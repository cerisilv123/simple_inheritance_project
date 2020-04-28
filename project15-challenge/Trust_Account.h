#include "Savings_Account.h"
#include "Account.h"

#ifndef Trust_Account_h
#define Trust_Account_h

class Trust_Account : public Savings_Account {
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
    private:
        int num_of_withdraw; 
        static constexpr const char *def_name = "Unnamed Trust_Account";
        static constexpr double def_balance = 0.0;
        static constexpr double def_int_rate = 0.0;
        static constexpr double bonus = 50; // $
        static constexpr double cap_spend = 5000; // minimum amount ot qualify for $50 bonus
    public:
        Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate); // Constructor
        bool deposit (double amount);
        bool withdraw (double amount);
    
};

#include <stdio.h>

#endif /* Trust_Account_hpp */
