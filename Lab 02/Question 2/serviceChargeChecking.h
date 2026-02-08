#pragma once
#include "checkingAccount.h"

class serviceChargeChecking : public checkingAccount {
public:
    serviceChargeChecking(string n, int acct, double bal);
    void withdraw(double amount) override;
    void writeCheck(double amount) override;
    void makeMonthlyStatement() override;
private:
    int checksRemaining;
    static const int CHECK_LIMIT = 5;
    static const double SERVICE_CHARGE;
};
