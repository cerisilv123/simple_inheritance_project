// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
    
    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account {} );
    trust_accounts.push_back(Trust_Account {"Superman"} );
    trust_accounts.push_back(Trust_Account {"Batman", 2000} );
    trust_accounts.push_back(Trust_Account {"Wonderwoman", 5000, 5.0} );
    
    display(trust_accounts);
    deposit(trust_accounts, 6000);
    withdraw(trust_accounts,100);
    withdraw(trust_accounts,100);
    withdraw(trust_accounts,4000);
    withdraw(trust_accounts,100);
    withdraw(trust_accounts,100);
    
    vector<Checking_Account> checking_accounts;
    checking_accounts.push_back(Checking_Account {});
    checking_accounts.push_back(Checking_Account {"Larry"});
    checking_accounts.push_back(Checking_Account {"Moe", 2000} );
    checking_accounts.push_back(Checking_Account {"Curly", 5000} );
    
    display(checking_accounts);
    deposit(checking_accounts, 1000);
    withdraw(checking_accounts,2000);

    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,100);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);
    

    return 0;
}

