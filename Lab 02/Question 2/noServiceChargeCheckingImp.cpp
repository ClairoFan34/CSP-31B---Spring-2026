#include "noServiceChargeChecking.h"

noServiceChargeChecking::noServiceChargeChecking(string n, int acct, double bal, double minB, double intR) : checkingAccount(n, acct, bal), minimumBalance(minB), interestRate(intR) {}

void noServiceChargeChecking::withdraw(double amount) { 
    balance -= amount; 
}
void noServiceChargeChecking::writeCheck(double amount) { 
    balance -= amount; 
}
void noServiceChargeChecking::makeMonthlyStatement() { 
    balance += (balance * interestRate / 12); 
}