#include "highInterestSavings.h"

highInterestSavings::highInterestSavings(string n, int acct, double bal, double intR, double minB) : savingsAccount(n, acct, bal, intR), minimumBalance(minB) {}

void highInterestSavings::withdraw(double amount) {
    if (balance - amount >= minimumBalance) balance -= amount;
}