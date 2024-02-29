#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a>>b>>c;
    if (c*1 >= a && c*1 <= b){
        cout << c*1;
    }
    if (c*2 >= a && c*2 <= b){
        cout << c*2;
    }
    if (c*3 >= a && c*3 <= b){
        cout << c*3;
    }
    else{
        cout << -1;
    }
    return 0;
}
