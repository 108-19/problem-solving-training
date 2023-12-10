#include <bits/stdc++.h>
using namespace std;
int main() {
    int r, b, g;
    cin >> r >> b >> g;
    int num = 100 * r + 10 * b + g;
    if (num % 4 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
