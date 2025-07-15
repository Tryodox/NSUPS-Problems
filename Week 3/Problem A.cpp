//A
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    int x;
    vector<int> order;
    map<int, int> freq;
    set<int> seen;
    while (cin >> x) {
        freq[x]++;
        if (seen.find(x) == seen.end()) {
            order.push_back(x);
            seen.insert(x);
        }
    }
    for (int val : order) {
        cout << val << " " << freq[val] << "\n";
    }

    return 0;
}
