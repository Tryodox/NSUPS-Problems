//Problem: R
//CPP

#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
   int n;
   double pi = acos(-1);
   cin >> n;

   vector<double> length(n);

   for (int i = 0; i < n; i++) {
      cin >> length[i];
   }

   cout << fixed << setprecision(2);

   for (int i = 0; i < n; i++) {
      double L = length[i];
      double width = L * 0.6;
      double radius = L * 0.2;
      double red = pi * radius * radius;
      double green = (L * width) - red;

      cout << red << " " << green << endl;
   }

   return 0;
}
