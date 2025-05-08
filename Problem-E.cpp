//Problem: D
//CPP

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

int sum1 = 0;
int sum2 = 0;
int diff;

   for (int i=0;i <n;i++){
      sum1 = sum1 + matrix[i][i];
   }
   for (int i=0;i <n;i++){
      sum2 = sum2 + matrix[i][n-1-i];
   }
if(sum1>sum2){
   diff = sum1-sum2;
} else {
   diff = sum2-sum1;
}
cout<<diff;

    return 0;
}
