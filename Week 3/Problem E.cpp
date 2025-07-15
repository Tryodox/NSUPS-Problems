//E
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_map<int, int> freq;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
    }

    int maxFreq = 0;
    for (auto& p : freq) {
        if (p.second > maxFreq)
            maxFreq = p.second;
    }

    cout << maxFreq << "\n";

    return 0;
}
