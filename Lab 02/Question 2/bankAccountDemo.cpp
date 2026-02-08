#include <iostream>
#include "bankAccount.h"
#include "serviceChargeChecking.h"
#include "savingsAccount.h"
#include "certificateOfDeposit.h"
using namespace std;

int main() {
    bankAccount* accounts[3];

    accounts[0] = new serviceChargeChecking("John Doe", 1001, 500.00);
    accounts[1] = new savingsAccount("Jane Smith", 2002, 2000.00, 0.03);
    accounts[2] = new certificateOfDeposit("Bob Brown", 3003, 10000.00, 0.06, 6);

    for (int i = 0; i < 3; i++) {
        
        cout << "Account: " << (*accounts[i]).getName() << endl;
        cout << "Starting Balance: $" << (*accounts[i]).getBalance() << endl;
        
        (*accounts[i]).makeMonthlyStatement();
        
        cout << "Balance after statement: $" << (*accounts[i]).getBalance() << endl;
        cout << "--------------------------" << std::endl;

    }

    return 0;
}