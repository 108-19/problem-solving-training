#include <iostream>
using namespace std;
int main() {
   string n;
cin>>n;
if(n[0]=='9') n[0]='1';
else if(n[0]=='1')n[0]='9';
if(n[1]=='9')n[1]='1';
else if(n[1]=='1')n[1]='9';
if(n[2]=='9')n[2]='1';
else if(n[2]=='1')n[2]='9';
cout<<n;

    return 0;
}
