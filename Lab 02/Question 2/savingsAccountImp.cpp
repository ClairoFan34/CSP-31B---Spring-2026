#include "savingsAccount.h"

savingsAccount::savingsAccount(string n, int acct, double bal, double intR) : bankAccount(n, acct, bal), interestRate(intR) {}

void savingsAccount::withdraw(double amount) { 
    balance -= amount; 
}
void savingsAccount::makeMonthlyStatement() { 
    balance += (balance * interestRate / 12); 
}