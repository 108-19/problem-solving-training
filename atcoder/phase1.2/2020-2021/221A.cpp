#include <bits/std.c++>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int difference = A - B;
    int energy_ratio = pow(32, difference);

    cout << energy_ratio << endl;

    return 0;
}
