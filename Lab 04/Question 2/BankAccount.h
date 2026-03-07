#pragma once
#include "InsufficientFundsException.h"
#include "NegativeAmountException.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <exception>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    string accountNumber;
    double balance;
public:
    BankAccount(string holder, string accNum, double initialBalance) {
        if (initialBalance < 0)
            throw NegativeAmountException(initialBalance, "deposit");
        accountHolder = holder;
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount < 0)
            throw NegativeAmountException(amount, "deposit");
        balance += amount;
        cout << fixed << setprecision(2);
        cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount < 0)
            throw NegativeAmountException(amount, "withdrawal");
        if (amount > balance)
            throw InsufficientFundsException(balance, amount, accountHolder);
        balance -= amount;
        cout << fixed << setprecision(2);
        cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
    }

    double getBalance() const {
        return balance;
    }

    string getAccountHolder() const {
        return accountHolder;
    }

    void displayAccountInfo() const {
        cout << fixed << setprecision(2);
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};