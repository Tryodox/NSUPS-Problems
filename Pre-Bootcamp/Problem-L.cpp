//Problem: L
//CPP

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> numbers;
    int size,even,odd,value,answer,posOdd,posEven;
    even = 0;
    odd = 0;
    cin >> size;

    for (int i=0;i<size;i++){
      cin >> value;
      numbers.push_back(value);
    }

    for (int i=0;i<size;i++){
      if(numbers[i]%2==0){
         even += 1;
         posEven = i +1;
      } else if(numbers[i]%2==1){
         odd += 1;
         posOdd = i +1;
      }
    }

    if(even == 1){
      cout << posEven<< endl;
    } else if (odd == 1){ 
      cout << posOdd << endl;
    } else{
      cout << "Error!" <<endl;
    }
   return 0;
}
