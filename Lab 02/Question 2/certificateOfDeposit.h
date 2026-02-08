#pragma once
#include "bankAccount.h"
class certificateOfDeposit : public bankAccount {
public:
    certificateOfDeposit(string n, int acct, double bal, double intR, int maturity);
    void withdraw(double amount) override;
    void makeMonthlyStatement() override;
private:
    double interestRate;
    int maturityMonths;
    int currentMonth;
};

