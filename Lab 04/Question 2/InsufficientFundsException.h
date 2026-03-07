#pragma once
#include <string>
#include <exception>
using namespace std;

class InsufficientFundsException : public exception {
private:
    string message;
public:
    InsufficientFundsException(double balance, double amount, string accountHolder) {
        message = "Insufficient funds for " + accountHolder + ". Balance: $" + to_string(balance) + ", Attempted withdrawal: $" + to_string(amount);
    }
    const char* what() const noexcept override {
        return message.c_str();
    }
};