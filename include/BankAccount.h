#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <iostream>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(const std::string& number, const std::string& holder, double initialBalance);

    // Deposit money
    void deposit(double amount);

    // Withdraw money
    void withdraw(double amount);

    // Display account details
    void displayAccountDetails() const;

    // Get current balance
    double getBalance() const;
};

#endif // BANKACCOUNT_H