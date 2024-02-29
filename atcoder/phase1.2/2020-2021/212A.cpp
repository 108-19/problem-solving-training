#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	0 <= a, b <= 100;
	1 <= a + b;
	if (a > 0 && b == 0) {
		cout << "Gold";
	}
	else if (a == 0 && b > 0) {
		cout << "Silver";
	}
	else {
		cout << "Alloy";
	}
	return 0;
}
