#include "BankAccount.h"
#include <iostream>

int main() {
    // Create a bank account
    BankAccount account("123456", "Sourav Das", 1000.0);

    int choice;
    double amount;

    while (true) {
        // Display menu
        std::cout << "\nBank Management System\n";
        std::cout << "1. Display Account Details\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                account.displayAccountDetails();
            break;

            case 2:
                std::cout << "Enter amount to deposit: ";
            std::cin >> amount;
            account.deposit(amount);
            break;

            case 3:
                std::cout << "Enter amount to withdraw: ";
            std::cin >> amount;
            account.withdraw(amount);
            break;

            case 4:
                std::cout << "Exiting the system. Thank you!\n";
            return 0;

            default:
                std::cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}