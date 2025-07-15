//B
#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size1, size2;
        cin >> size1 >> size2;

        unordered_map<int, int> freq1, freq2;
        int x;

        for (int i = 0; i < size1; ++i) {
            cin >> x;
            freq1[x]++;
        }

        for (int i = 0; i < size2; ++i) {
            cin >> x;
            freq2[x]++;
        }

        int removals = 0;

        for (auto& [num, count1] : freq1) {
            int count2 = freq2[num];
            removals += abs(count1 - count2);
            freq2.erase(num);
        }

        for (auto& [num, count2] : freq2) {
            removals += count2;
        }

        cout << removals << endl;
    }

    return 0;
}
