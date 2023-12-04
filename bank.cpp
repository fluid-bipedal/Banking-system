#include "bank.h"
#include <iostream>

Account* Bank::createAccount(const std::string& owner, double balance) {
    Account account(owner, balance);
    accounts.push_back(account);
    return &accounts.back();
}

void Bank::deposit(Account* account, double amount) {
    account->deposit(amount);
}

void Bank::withdraw(Account* account, double amount) {
    account->withdraw(amount);
}

void Bank::displayAccountDetails(Account* account) {
    std::cout << "Account Details:\n";
    std::cout << "Owner: " << account->getOwner() << "\n";
    std::cout << "Balance: $" << account->getBalance() << "\n\n";
}
