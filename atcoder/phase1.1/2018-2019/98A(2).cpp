#include <bits/stdc++.h>
#define Martina ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    Martina
        int a,b; cin>>a>>b;
        if(a+b>=a-b && a+b>=a*b){
            cout<<a+b;
        }
        else if(a-b>=a+b && a-b>=a*b){
            cout<<a-b;
        }
        else {
            cout<<a*b;
        }

        return 0;
    }
