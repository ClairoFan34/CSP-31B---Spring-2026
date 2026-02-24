#include <iostream>
#include <fstream>
#include <iomanip>
#include "stockListType.h"

void printHeader() {
    cout << left << setw(10) << "Stock" << right << setw(15) << "Today" 
         << setw(35) << "Previous" << setw(10) << "Percent" << endl;
    cout << left << setw(10) << "Symbol" << right << setw(5) << "Open" 
         << setw(10) << "Close" << setw(10) << "High" << setw(10) << "Low" 
         << setw(12) << "Close" << setw(10) << "Gain" << setw(12) << "Volume" << endl;
    cout << "------    -----     -----     -----     -----     -----     -----     ------" << endl;
}

int main() {
    stockListType myPortfolio;
    myPortfolio.loadData("stocksData.txt");

    cout << "********** First Investor's Heaven   **********" << endl;
    cout << "********** Financial Report       **********" << endl;
    myPortfolio.sortByGain();
    printHeader();
    myPortfolio.printByGain();
    cout << "Closing Assets: $" << fixed << setprecision(2) << myPortfolio.calculateTotalAssets() << endl;
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;

    return 0;
}