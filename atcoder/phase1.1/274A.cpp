#include <bits/stdc++.h>
using namespace std;
int main () {
    double a, b;
    cin >> a >> b;
    double c = b / a * 10000.0;
    int d = c;
    if (d % 10 >= 5) {
        d += 10;
    }
    d /= 10;
    double ans = d / 1000.0;
    cout << fixed << setprecision(3);
    cout << ans << endl;
    
    return 0;
}
