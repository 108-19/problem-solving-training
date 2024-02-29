#include <bits/stdc++.h>
using namespace std;
int main(){
    ll n;
    string s;
    cin >> n >> s;
    ll t=0,a=0;
    rep(i,0,n){
        if(s[i]=='T')t++;
        else a++;
    }
    if(t<a)cout << "A";
    else if(t>a)cout << "T";
    else if(s[n-1]=='A')cout << "T";
    else cout << "A";
    
}
