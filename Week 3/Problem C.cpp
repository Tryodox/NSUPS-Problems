#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    int removals = 0;
    for (auto& [num, count] : freq) {
        if (count == num) {
            continue;
        } else if (count > num) {
            removals += count - num;
        } else {
            removals += count;
        }
    }

    cout << removals << endl;

    return 0;
}
