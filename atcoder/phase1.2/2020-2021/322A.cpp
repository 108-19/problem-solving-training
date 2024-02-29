#include<bits/std.c++>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n >> s;
    int a = -1;
    for (int i = 0; i < n - 2; i++) {
        if (s[i] == 'A' and s[i + 1] == 'B' and s[i + 2] == 'C') {
            a = i + 1;
            break;
        }
    }
    cout << a << endl;
    return 0;
}
