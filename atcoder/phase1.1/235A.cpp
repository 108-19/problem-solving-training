#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a,b,c,result;
    a=n/100;
    b=(n/10)%10;
    c=n%10;
   result = n + (b * 100 + c * 10 + a) + (c * 100 + a * 10 + b);
   cout<<result;
   return 0;
}
