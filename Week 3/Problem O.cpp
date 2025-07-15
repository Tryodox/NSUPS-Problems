//O
#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    deque<int> dq;
    vector<int> result;

    for (int i = 0; i < n; i++) {
        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();
        while (!dq.empty() && arr[dq.back()] < arr[i])
            dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1)
            result.push_back(arr[dq.front()]);
    }
    for (int x : result){
        cout << x << " ";
    }
        
    cout << "\n";

    return 0;
}
