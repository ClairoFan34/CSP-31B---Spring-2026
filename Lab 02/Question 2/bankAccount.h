#include <string>
using namespace std;
class bankAccount {
    public:
        string getName();
        int getAccountNumber();
        double  getBalance();
        void makeDeposit(double amount);
        void withdraw(double amount);
        void makeMonthlyStatement();
        virtual void writeCheck();
    private:
        string name;
        int accountNumber;
        int balance;
};