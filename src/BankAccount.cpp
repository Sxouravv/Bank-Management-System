#include "BankAccount.h"

// Constructor implementation
BankAccount::BankAccount(const std::string& number, const std::string& holder, double initialBalance)
    : accountNumber(number), accountHolderName(holder), balance(initialBalance) {}

// Deposit money implementation
void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Deposited: $" << amount << std::endl;
    } else {
        std::cout << "Invalid deposit amount!" << std::endl;
    }
}

// Withdraw money implementation
void BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        std::cout << "Withdrawn: $" << amount << std::endl;
    } else {
        std::cout << "Invalid withdrawal amount or insufficient balance!" << std::endl;
    }
}

// Display account details implementation
void BankAccount::displayAccountDetails() const {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Account Holder: " << accountHolderName << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
}

// Get balance implementation
double BankAccount::getBalance() const {
    return balance;
}