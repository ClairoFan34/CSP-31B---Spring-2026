#pragma once
#include "listType.h"
#include "stockType.h"
using namespace std;

class stockListType : public listType<stockType> {
    private:
        int sortIndicesGainLoss[100];
    public:

    void loadData(string fileName) {
        ifstream infile(fileName);
        int i = 0;
        while (infile >> list[i]) {
            sortIndicesGainLoss[i] = i;
            i++;
        }
        length = i;
    }

    void sortByGain() {
        for (int i = 0; i < length - 1; i++) {
            int maxIndex = i;
            for (int j = i + 1; j < length; j++) {
                if (list[sortIndicesGainLoss[j]].getPercentGain() > list[sortIndicesGainLoss[maxIndex]].getPercentGain())
                    maxIndex = j;
            }
            swap(sortIndicesGainLoss[i], sortIndicesGainLoss[maxIndex]);
        }
    }

    void printByGain() {
        for (int i = 0; i < length; i++) {
            cout << list[sortIndicesGainLoss[i]] << endl;
        }
    }

    double calculateTotalAssets() {
        double total = 0;
        for (int i = 0; i < length; i++) {
            total += (list[i].getClosingPrice() * list[i].getNumOfShares());
        }
        return total;
    }
    };

