#include <bits/stdc++.h>
#define Martina ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    Martina
    int a,b;
    cin>>a>>b;
    if(b>=a){
        cout<<a;
    }
    else if (a>b){
        cout<<a-1;
    }
    return 0;
}
