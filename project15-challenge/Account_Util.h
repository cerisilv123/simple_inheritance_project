#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

// Utility helper functions for Account class

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &accounts, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

// Utility helper functions for Savings Account class

void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account> &accounts, double amount);
void withdraw(std::vector<Savings_Account> &accounts, double amount);
#endif

// Utility Helper functions for Checking Account Class

void display(const std::vector<Checking_Account> &checking_accounts);
void withdraw(std::vector<Checking_Account> &checking_accounts, double amount);
void deposit(std::vector<Checking_Account> &checking_accounts, double amount);

// Utility Helper functions for Trust Account Class

void display(const std::vector<Trust_Account> &trust_accounts);
void deposit(std::vector<Trust_Account> &trust_accounts, double amount);
void withdraw(std::vector<Trust_Account> &trust_accounts, double amount);
