#include <iostream>

using namespace std;

int main() {
    double num;
    cin >> num;
    int X = int(num);
    int Y = int((num - X) * 10);
    string sign;
    if (Y <= 2)
        sign = "-";
    else if (Y <= 6)
        sign = "";
    else
        sign = "+";
    cout << X << sign << endl;

    return 0;
}
