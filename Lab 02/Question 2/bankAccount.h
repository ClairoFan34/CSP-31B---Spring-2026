#pragma once
#include <string>
using namespace std;

class bankAccount {
    public:
        bankAccount(string name, int acct, double bal);
        string getName();
        int getAccountNumber();
        double  getBalance();
        void makeDeposit(double amount);
        virtual void withdraw(double amount) = 0;
        virtual void makeMonthlyStatement() = 0;
    protected:
        string name;
        int accountNumber;
        double balance;
};
