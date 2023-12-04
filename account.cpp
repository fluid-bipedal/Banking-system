#include "account.h"

Account::Account(const std::string& owner, double balance)
    : owner(owner), balance(balance) {}

const std::string& Account::getOwner() const {
    return owner;
}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
    } else {
        // Handle insufficient funds
    }
}
