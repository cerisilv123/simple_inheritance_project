#ifndef Checking_Account_h
#define Checking_Account_h

#include <iostream>
#include <string>
#include "Account.h"

class Checking_Account : public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
    private:
        static constexpr const char *def_name = "Unnamed CheckingAccount";
        static constexpr double def_balance = 0.0;
        static constexpr double def_flat_fee = 1.50; // fee per account withdraw
    public:
        Checking_Account(std::string name = def_name, double balance = def_balance); // Constructor
        bool withdraw(double amount);
    
};

#endif /* Checking_Account_hpp */
