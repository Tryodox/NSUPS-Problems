//Problem: Q
//CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    char colon;
    cin >> h1 >> colon >> m1 >> h2 >> colon >> m2;
    int start = h1 * 60 + m1;
    int end = h2 * 60 + m2;
    int mid = (start + end) / 2;
    int hour = mid / 60;
    int minute = mid % 60;
    cout << setw(2) << setfill('0') << hour << ":"
         << setw(2) << setfill('0') << minute << endl;
    return 0;
}
