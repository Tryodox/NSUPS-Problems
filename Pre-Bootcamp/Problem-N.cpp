//Problem: N
//CPP

#include <iostream>
#include <vector>
using namespace std;

int main() {
    

int size,x,y,z,mult;
float div;
vector <int> schools;
vector <int> students;
vector <int> passed;

cin>>size;

for (int i = 0;i<size;i++){
   cin>>x>>y>>z;
   schools.push_back(x);
   students.push_back(y);
   passed.push_back(z);
   }

for (int i =0; i< size;i++){
   mult = schools[i]*students[i];
   div = (float)passed[i] / mult;
   if (div>0.5){
      cout<<"YES"<<endl;
   } else if(div<=0.5){
      cout <<"NO"<<endl;
   }
}

   return 0;
}
