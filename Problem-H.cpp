//Problem: H
//CPP

#include <iostream>
#include <climits>

using namespace std;

int main(){

long long arr[5]={};
long long size = sizeof(arr)/sizeof(long long);
long long smallest= LLONG_MAX;
long long largest= LLONG_MIN;
long long sum=0;

for(int i=0;i<5;i++){
   cin>>arr[i];
} 
for(int i=0;i<size;i++){
      smallest = min(arr[i],smallest);
}
for(int i=0;i<size;i++){
   largest = max(arr[i],largest);
}
for(int i=0;i<size;i++){
   sum = sum+arr[i];
}
long long smallestSum = sum-largest;
long long largestSum = sum-smallest;
cout<<smallestSum<<" "<<largestSum<<endl;

return 0;
}
