// stockType.h (Simplified)
#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class stockType {
    friend ostream& operator<<(ostream&, const stockType&);
    friend istream& operator>>(istream&, stockType&);

private:
    string stockSymbol;
    double openingPrice, closingPrice, todayHigh, todayLow, prevClose;
    double percentGain;
    int numOfShares;

public:
    void setStockInfo(string symbol, double open, double close, double high, double low, double prev, int shares) {
        stockSymbol = symbol;
        openingPrice = open;
        closingPrice = close;
        todayHigh = high;
        todayLow = low;
        prevClose = prev;
        numOfShares = shares;
        percentGain = ((closingPrice - prevClose) / prevClose) * 100.0;
    }

    double getClosingPrice() const { 
        return closingPrice; 
    }
    int getNumOfShares() const { 
        return numOfShares; 
    }
    double getPercentGain() const { 
        return percentGain; 
    }
    
    bool operator<(const stockType& other) const { 
        return stockSymbol < other.stockSymbol; 
    }
    bool operator==(const stockType& other) const { 
        return stockSymbol == other.stockSymbol; 
    }

    friend ostream& operator<<(ostream& os, const stockType& s) {
    os << setw(6) << left << s.stockSymbol 
       << setw(10) << right << fixed << setprecision(2) << s.openingPrice 
       << setw(10) << s.closingPrice 
       << setw(10) << s.todayHigh 
       << setw(10) << s.todayLow 
       << setw(12) << s.prevClose 
       << setw(10) << s.percentGain << "%"
       << setw(12) << s.numOfShares;
    return os;
    }

    friend istream& operator>>(istream& is, stockType& s) {
        is >> s.stockSymbol >> s.openingPrice >> s.closingPrice 
        >> s.todayHigh >> s.todayLow >> s.prevClose >> s.numOfShares;
        s.percentGain = ((s.closingPrice - s.prevClose) / s.prevClose) * 100.0;
        return is;
    }
};

