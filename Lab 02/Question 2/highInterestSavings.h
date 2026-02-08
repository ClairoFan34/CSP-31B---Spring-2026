#pragma once
#include "savingsAccount.h"

class highInterestSavings : public savingsAccount {
public:
    highInterestSavings(string n, int acct, double bal, double intR, double minB);
    void withdraw(double amount) override;
private:
    double minimumBalance;
};
