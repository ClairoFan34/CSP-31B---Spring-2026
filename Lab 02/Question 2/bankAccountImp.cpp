#include "bankAccount.h"
#include <string>
#include <iostream>
using namespace std;

string bankAccount::getName() {
    return name;
}

int bankAccount::getAccountNumber(){
    return accountNumber;
}

double bankAccount::getBalance() {
    return balance;
}

void bankAccount::makeDeposit(double amount) {
    balance += amount;
}

void bankAccount::withdraw(double amount) {
    balance -= amount;
}

void bankAccount::makeMonthlyStatement() {
      
};