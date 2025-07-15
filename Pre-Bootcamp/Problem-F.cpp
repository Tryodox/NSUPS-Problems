//Problem: F
//CPP

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int pos =0;
    int neg =0;
    int zero =0;

    vector<int> matrix(n);

    for (int i = 0; i < n; i++) {
            cin >> matrix[i];
    }
    for (int i =0; i < n; i++){
      if(matrix[i]>0){
         pos = pos +1;
      } else if (matrix[i]<0){
         neg = neg +1;
      } else if (matrix[i]==0){
         zero = zero +1;
      }
    }
    
    cout<<pos/(float)n<<endl;
    cout<<neg/(float)n<<endl;
    cout<<zero/(float)n<<endl;
    
    return 0;
}
