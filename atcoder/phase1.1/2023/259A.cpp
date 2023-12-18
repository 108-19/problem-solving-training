#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,x,t,d,ans=0;
    cin >> n >> m >> x >> t >> d;
    if(m<x) {
        ans=t-(x-m)*d;
    } else {
        ans=t;
    }
    cout << ans << endl;
    return 0;
} 

