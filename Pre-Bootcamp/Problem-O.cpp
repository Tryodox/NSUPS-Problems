//Problem: O
//CPP
#include <iostream>

using namespace std;

int main() {
   int n,k,l,c,d,p,np,nl,lk,cd,x,y;

   cin >> n >> k >> l >> c >> d >> p >> nl >> np;
   lk = l*k;
   cd = c*d;
   x = lk/nl;
   y = p/np;
   cout << min(min(x,y),cd)/n;

    return 0;
}
