//Problem: J
//CPP

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string time;
    cin >> time;

    int hour = stoi(time.substr(0, 2));
    string minSec = time.substr(2, 6);
    string period = time.substr(8, 2);

    if (period == "AM" && hour == 12) hour = 0;
    if (period == "PM" && hour != 12) hour += 12;

    cout << setfill('0') << setw(2) << hour << minSec << endl;

    return 0;
}
