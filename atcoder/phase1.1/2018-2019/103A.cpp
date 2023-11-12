#include <bits/stdc++.h>
using namespace std;
int main() {
    int a1,a2,a3; 
    cin>>a1>>a2>>a3;
    int c=max({a1,a2,a3})-min({a1,a2,a3});
    cout<<c;
        return 0;
    }
