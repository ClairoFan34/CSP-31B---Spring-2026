#include <iostream>
#include <string>
using namespace std;


class invalidhr {
};

class invalidmin {
};

class invalidsec {
};

int main() {
    int hr;
    int min;
    int sec;
    string period;

    try {
        cout << "Enter time in 12-hr format" << endl;
        cout << "Hour: ";
        cin >> hr;

        if (hr < 1 || hr > 12)
            throw invalidhr();

        cout << "Minute: ";
        cin >> min;

        if (min < 0 || min > 59)
            throw invalidmin();

        cout << "Second: ";
        cin >> sec;

        if (sec < 0 || sec > 59)
            throw invalidsec();

        cout << "Enter AM or PM: ";
        cin >> period;

        if (period == "PM" || period == "pm") {
            if (hr != 12)
                hr += 12;
        }
        else if (period == "AM" || period == "am") {
            if (hr == 12)
                hr = 0;
        }
        else {
            cout << "Invalid period entered." << endl;
            return 1;
        }

        cout << "\nTime in 24-hr format: ";

        if (hr < 10) cout << "0";
            cout << hr << ":";

        if (min < 10) cout << "0";
            cout << min << ":";

        if (sec < 10) cout << "0";
            cout << sec << endl;
    }

    catch (invalidhr) {
        cout << "Exception: Invalid hr entered." << endl;
    }
    catch (invalidmin) {
        cout << "Exception: Invalid min entered." << endl;
    }
    catch (invalidsec) {
        cout << "Exception: Invalid sec entered." << endl;
    }

    return 0;
}