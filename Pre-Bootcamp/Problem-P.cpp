//Problem:P
//CPP


#include <iostream>
#include <vector>
using namespace std;

int main() {
   
   vector <int> firstNum;
   vector <int> secondNum;
   int n,x,y;
   cin>>n;
   for(int i=0;i<n;i++){
      cin>>x>>y;
      firstNum.push_back(x);
      secondNum.push_back(y);
   }
   for(int i=0;i<n;i++){
      if(firstNum[i]>secondNum[i]){
         cout<<">"<<endl;
      } else if(firstNum[i]<secondNum[i]){
         cout<<"<"<<endl;
      } else if(firstNum[i]==secondNum[i]){
         cout<<"="<<endl;
      }
   }
    return 0;
}
