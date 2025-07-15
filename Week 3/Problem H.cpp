//H
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> count;
    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;

        if (count[name] == 0) {
            cout << "OK" << endl;
            count[name] = 1;
        } else {
            string new_name = name + to_string(count[name]);
            while (count.find(new_name) != count.end()) {
                count[name]++;
                new_name = name + to_string(count[name]);
            }
            cout << new_name << endl;
            count[new_name] = 1;
            count[name]++;
        }
    }

    return 0;
}
