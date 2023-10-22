#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    if(k>=n){
        cout<<n*x;
    }
    else if(n>k){
        cout<<k*x+(n-k)*y;
    }
    return 0;
    }
