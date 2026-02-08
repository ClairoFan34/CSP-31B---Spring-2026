#include "serviceChargeChecking.h"

const double serviceChargeChecking::SERVICE_CHARGE = 10.0;

serviceChargeChecking::serviceChargeChecking(string n, int acct, double bal) : checkingAccount(n, acct, bal), checksRemaining(CHECK_LIMIT) {}

void serviceChargeChecking::withdraw(double amount) { 
    balance -= amount; 
}
void serviceChargeChecking::writeCheck(double amount) {
    if (checksRemaining > 0) { balance -= amount; checksRemaining--; 
    }
}
void serviceChargeChecking::makeMonthlyStatement() { 
    balance -= SERVICE_CHARGE; 
}