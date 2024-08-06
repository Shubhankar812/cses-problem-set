#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


int main() {
   long long int n;
   cin>>n;

   vector<long long int> arr(n);
    long long int sum=0;
   for(int i=0;i<n-1;i++) {
    cin>>arr[i];
    sum+=arr[i];
   }

    long long int total = (n*(n+1))/2;

    cout<<total-sum<<"\n";

}