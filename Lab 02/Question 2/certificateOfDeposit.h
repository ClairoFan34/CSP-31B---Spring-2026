#include "bankAccount.h"

class certificateOfDeposit : public bankAccount {
    public:

    private:
        int CDMaturityMonths;
        double interestRate;
        int currentCDMonth;
};