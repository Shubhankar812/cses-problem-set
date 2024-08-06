#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int repetitions_brute(string &s) {
   int count=1,test=1;
   int n=s.length();
   for(int i=1;i<n;i++) {
   
    if(s[i]==s[i-1]) {
        test++;
    }
    else{
        test=1;
    }
    count=max(count,test);
   }
   return count;
}
int main()
{
    string s;
    cin>>s;

    int ans = repetitions_brute(s);

    cout<<ans<<endl;

}