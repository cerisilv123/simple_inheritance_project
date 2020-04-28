
#include "Checking_Account.h"

#include <iostream>
#include <string>
// Output streams
std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "[Checking_Account: " << account.name << ": " << account.balance << " ]";
    return os;
}

// Overloaded Constructor
Checking_Account::Checking_Account (std::string name, double balance)
: Account{name, balance} {
    
}

// Withdraw Savings
bool Checking_Account::withdraw(double amount) {
    amount += def_flat_fee;
    return Account::withdraw(amount);
}
