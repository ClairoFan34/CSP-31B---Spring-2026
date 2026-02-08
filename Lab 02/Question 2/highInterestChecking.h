#pragma once
#include "noServiceChargeChecking.h"

class highInterestChecking : public noServiceChargeChecking {
public:
    highInterestChecking(string n, int acct, double bal);
};

