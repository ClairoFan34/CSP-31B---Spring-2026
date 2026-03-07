#pragma once
#include <string>
#include <exception>
using namespace std;

class NegativeAmountException : public exception {
private:
    string message;
public:
    NegativeAmountException(double amount, string operation) {
        message = "Invalid " + operation + " amount: $" + to_string(amount) + ". Amount cannot be negative.";
    }
    const char* what() const noexcept override {
        return message.c_str();
    }
};