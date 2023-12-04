#ifndef BANK_H
#define BANK_H

#include "account.h"

class Bank {
public:
    Account* createAccount(const std::string& owner, double balance);
    void deposit(Account* account, double amount);
    void withdraw(Account* account, double amount);
    void displayAccountDetails(Account* account);

private:
    std::vector<Account> accounts;
};

#endif // BANK_H
