#pragma once
#include "bankAccount.h"

class checkingAccount : public bankAccount {
    public:
        checkingAccount(string name, int acct, double bal);
        virtual void writeCheck(double amount) = 0;
    private:
};

