#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
    Account(const std::string& owner, double balance);

    const std::string& getOwner() const;
    double getBalance() const;
    void deposit(double amount);
    void withdraw(double amount);

private:
    std::string owner;
    double balance;
};

#endif // ACCOUNT_H
