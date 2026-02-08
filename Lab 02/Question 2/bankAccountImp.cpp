#include "bankAccount.h"
#include <iostream>
#include <iomanip>
using namespace std;

bankAccount::bankAccount(string n, int acct, double bal) {
    name = n;
    accountNumber = acct;
    balance = bal;
}

string bankAccount::getName() { 
    return name; 
}
int bankAccount::getAccountNumber(){ 
    return accountNumber; 
}
double bankAccount::getBalance(){ 
    return balance; 
}

void bankAccount::makeDeposit(double amount) {
    balance += amount;
}