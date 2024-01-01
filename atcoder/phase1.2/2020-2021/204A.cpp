#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 1 || x == 1 && y == 0){
        cout << 2;
    }
    else if (x == 1 && y == 2 || x == 2 && y == 1){
        cout << 0;
    }
    else if (x == 2 && y == 0 || x == 0 && y == 2){
        cout << 1;
    }
    else if (x == y){
        cout << x;
    }
    return 0;
}
