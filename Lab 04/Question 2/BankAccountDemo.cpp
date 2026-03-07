#include "BankAccount.h"
#include "InsufficientFundsException.h"
#include "NegativeAmountException.h"
#include <iostream>
#include <string>
#include <exception>
#include <iomanip>
using namespace std;

int main() {

    cout << "============================================================\n";
    cout << "BANK ACCOUNT EXCEPTION HANDLING LAB\n";
    cout << "============================================================\n";

    BankAccount* account = nullptr;

    cout << "--- Creating Account ---\n";
    try {
        account = new BankAccount("John Doe", "1234567890", 500.00);
        cout << "Account created successfully!\n";
        account->displayAccountInfo();
    }
    catch (exception& e) {
        cout << "EXCEPTION CAUGHT: " << e.what() << endl;
    }

    cout << "============================================================\n";
    cout << "TEST 1: Successful Deposit\n";
    cout << "============================================================\n";
    try {
        cout << "Depositing $150.00...\n";
        account->deposit(150.00);
    }
    catch (exception& e) {
        cout << "EXCEPTION CAUGHT: " << e.what() << endl;
    }

    cout << "============================================================\n";
    cout << "TEST 2: Successful Withdrawal\n";
    cout << "============================================================\n";
    try {
        cout << "Withdrawing $200.00...\n";
        account->withdraw(200.00);
    }
    catch (exception& e) {
        cout << "EXCEPTION CAUGHT: " << e.what() << endl;
    }

    cout << "============================================================\n";
    cout << "TEST 3: Deposit Negative Amount\n";
    cout << "============================================================\n";
    try {
        cout << "Attempting to deposit $-50.00...\n";
        account->deposit(-50.00);
    }
    catch (exception& e) {
        cout << "EXCEPTION CAUGHT: " << e.what() << endl;
    }

    cout << "============================================================\n";
    cout << "TEST 4: Withdraw Negative Amount\n";
    cout << "============================================================\n";
    try {
        cout << "Attempting to withdraw $-100.00...\n";
        account->withdraw(-100.00);
    }
    catch (exception& e) {
        cout << "EXCEPTION CAUGHT: " << e.what() << endl;
    }

    cout << "============================================================\n";
    cout << "TEST 5: Withdraw More Than Balance\n";
    cout << "============================================================\n";
    try {
        cout << fixed << setprecision(2);
        cout << "Current balance: $" << account->getBalance() << endl;
        cout << "Attempting to withdraw $1000.00...\n";
        account->withdraw(1000.00);
    }
    catch (exception& e) {
        cout << "EXCEPTION CAUGHT: " << e.what() << endl;
    }

    cout << "============================================================\n";
    cout << "TEST 6: Create Account with Negative Balance\n";
    cout << "============================================================\n";
    try {
        cout << "Attempting to create account with balance $-100.00...\n";
        BankAccount badAccount("Jane Doe", "9999999999", -100.00);
    }
    catch (exception& e) {
        cout << "EXCEPTION CAUGHT: " << e.what() << endl;
    }

    cout << "============================================================\n";
    cout << "FINAL ACCOUNT STATUS\n";
    cout << "============================================================\n";

    if (account != nullptr)
        account->displayAccountInfo();

    cout << "Program completed successfully - all exceptions handled!\n";

    delete account;
    return 0;
}