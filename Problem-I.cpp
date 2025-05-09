//Problem: I
//CPP

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    
int size,element,largest,num;
largest = INT_MIN;
num = 0;
cin>> size;

vector <int> candle;

for(int i=0; i <size;i++){
   cin >> element;
   candle.push_back(element);
}

for(int i=0;i<size;i++){
   if (candle[i]>=largest){
      largest = candle[i];
   }
}

for(int i=0;i<size;i++){
   if (candle[i]==largest){

      num=num+1;
   }
}
cout<<num;


return 0;
}
