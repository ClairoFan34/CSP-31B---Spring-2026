#include "invalidHour.h"
#include "invalidMinute.h"
#include "invalidSecond.h"
#include <iostream>
#include <sstream>

int main() {
    string time;
    cout << "Please enter your time in 12 hour notation. (I.E. Hours:Minutes:SecondsAM/PM, 4:30:23PM , 9:00AM)" << endl;
    cin >> time;
    stringstream str(time);
    vector<string> timeVec;
    string unit;
    

    

    return 0;

}
