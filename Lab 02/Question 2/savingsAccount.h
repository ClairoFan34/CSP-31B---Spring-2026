#pragma once
#include "bankAccount.h"

class savingsAccount : public bankAccount {
public:
    savingsAccount(string n, int acct, double bal, double intR);
    void withdraw(double amount) override;
    void makeMonthlyStatement() override;
protected:
    double interestRate;
};

