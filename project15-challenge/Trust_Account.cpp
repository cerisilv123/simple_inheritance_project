#include "Trust_Account.h"

#include <iostream>
#include <string>

std::ostream &operator<<(std::ostream &os, const Trust_Account &trust_account) {
    os << "[Trust_Account: " << trust_account.name << ": " << trust_account.balance << ", " << trust_account.int_rate << "%]";
    return os;
}

// Constructor - same as savings_account
Trust_Account::Trust_Account (std::string name, double balance, double int_rate)
: Savings_Account {name, balance, int_rate}, num_of_withdraw{0} {
}

// Deposit - If amount is over 5000 user will be deposited a $50 bonus before interest rate
bool Trust_Account::deposit(double amount) {
    if (amount >= cap_spend) {
       amount += bonus;
       return Savings_Account::deposit(amount);
    }
    else {
       return Savings_Account::deposit(amount);
    }
}

// Withdraw - maximum of 3 withdraws and must be 20% or less of bank balance
bool Trust_Account::withdraw(double amount) {
    if ((amount > (balance/100) * 20) || num_of_withdraw >= 3)
        return false;
    else {
        num_of_withdraw ++;
    }
    return Savings_Account::withdraw(amount);
}
