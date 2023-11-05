#include <bits/stdc++.h>
using namespace std;
int main() {
    string S;
    cin >> S;
    if (S== "RRR"){
        cout << 3;}
    if (S== "RRS" || S == "SRR"){
        cout << 2;}
    if (S== "SRS" || S== "SSR" || S== "RSR" || S== "RSS"){
        cout << 1;}
    if(S=="SSS"){
            cout<<"0";}
        return 0;
}
