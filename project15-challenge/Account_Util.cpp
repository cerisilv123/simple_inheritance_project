#include <iostream>
#include "Account_Util.h"

// Displays Account objects in a  vector of Account objects 
void display(const std::vector<Account> &accounts) {
    std::cout << "\n=== Accounts ==========================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts =================================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}


// Helper functions for Savings Account class

// Displays Savings Account objects in a  vector of Savings Account objects 
void display(const std::vector<Savings_Account> &accounts) {
    std::cout << "\n=== Savings Accounts ====================================" << std::endl;
    for (const auto &acc: accounts) 
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Savings Account object in the vector
void deposit(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Savings Accounts ==========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw supplied amount from each Savings Account object in the vector
void withdraw(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Savings Accounts ======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    } 
}

// Helper functions for Checking Account class

// Displays Checking_Account objects in a  vector of Checking_Account objects
void display(const std::vector<Checking_Account> &checking_accounts) {
    std::cout << "\n=== Checking Accounts ==========================================" << std::endl;
    for (const auto &acc: checking_accounts)
        std::cout << acc << std::endl;
}

// Withdraw supplied amount from each Checking Account object in the vector with 1.50 fee
void withdraw(std::vector<Checking_Account> &checking_accounts, double amount) {
    std::cout << "\n=== Withdrawing from Checking Accounts ======================" << std::endl;
    for (auto &acc:checking_accounts)  {
        if (acc.withdraw(amount)) // 1.50 is flat fee charged for checking account withdrawals
            std::cout << "Withdrew " << amount + 1.50 << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount + 1.50 << " from " << acc << std::endl;
    }
}

// Deposits supplied amount to each Checking_Account object in the vector
void deposit(std::vector<Checking_Account> &checking_accounts, double amount) {
    std::cout << "\n=== Depositing to Checking Accounts =================================" << std::endl;
    for (auto &acc:checking_accounts)  {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Diplays each Trust Account object in the vector
void display(const std::vector<Trust_Account> &trust_accounts) {
    std::cout << "\n=== Trust Accounts ====================================" << std::endl;
    for (const auto &acc: trust_accounts)
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Trust Account object in the vector
void deposit(std::vector<Trust_Account> &trust_accounts, double amount) {
    std::cout << "\n=== Depositing to Trust Accounts ==========================" << std::endl;
    for (auto &acc:trust_accounts)  {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount <<  " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Trust_Account> &trust_accounts, double amount) {
   std::cout << "\n=== Withdrawing from Trust Accounts ==============================" <<std::endl;
       for (auto &acc:trust_accounts)  {
           if (acc.withdraw(amount))
               std::cout << "Withdrew " << amount << " from " << acc << std::endl;
           else
               std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
       }
}
