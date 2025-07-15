//J
#include <iostream>
#include <set>
using namespace std;
int main() {
    int T;
    cin >> T;

    for (int scenario = 1; scenario <= T; scenario++) {
        int N, R;
        cin >> N >> R;

        set<int> spies;
        pair<int, int> relations[R];
        for (int i = 0; i < R; i++) {
            int R1, R2;
            cin >> R1 >> R2;
            relations[i] = {R1, R2};
            spies.insert(R1);
        }
        bool found_spy_on_spy = false;
        for (int i = 0; i < R; i++) {
            int R2 = relations[i].second;
            if (spies.count(R2)) {
                found_spy_on_spy = true;
                break;
            }
        }
        cout << "Scenario #" << scenario << ": ";
        if (found_spy_on_spy)
            cout << "spied" << endl;
        else
            cout << "spying" << endl;
    }

    return 0;
}
