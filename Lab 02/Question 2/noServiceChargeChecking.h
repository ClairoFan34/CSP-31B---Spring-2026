#pragma once
#include "checkingAccount.h"
class noServiceChargeChecking : public checkingAccount {
public:
    noServiceChargeChecking(string n, int acct, double bal, double minB, double intR);
    void withdraw(double amount) override;
    void writeCheck(double amount) override;
    void makeMonthlyStatement() override;
protected:
    double minimumBalance;
    double interestRate;
};
