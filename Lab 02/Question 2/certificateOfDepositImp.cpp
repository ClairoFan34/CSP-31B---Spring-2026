#include "certificateOfDeposit.h"
certificateOfDeposit::certificateOfDeposit(string n, int acct, double bal, double intR, int maturity)
    : bankAccount(n, acct, bal), interestRate(intR), maturityMonths(maturity), currentMonth(0) {}

void certificateOfDeposit::withdraw(double amount) {
    if (currentMonth < maturityMonths) balance -= (amount + 50.0); 
    else balance -= amount;
}
void certificateOfDeposit::makeMonthlyStatement() { 
    balance += (balance * interestRate / 12); 
    currentMonth++; 
}