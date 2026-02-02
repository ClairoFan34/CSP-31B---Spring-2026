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
    depositCount++;
    amountDeposited += amount;
}

void bankAccount::withdraw(double amount) {
    balance -= amount;
    withdrawCount++;
    amountWithdrawn += amount;
}

void bankAccount::makeMonthlyStatement() {
      cout << "Current Balance: " << balance << endl;
      cout << "Withdrawal summary: " << endl;
      cout << "Amount withdrawn: " << amountWithdrawn << " - Withdrawals made: " << withdrawCount << endl; 
      cout << "Deposit Summary:" << endl;
      cout << "Amount deposited: " << amountDeposited << " - Deposits made: " << depositCount << endl;

};