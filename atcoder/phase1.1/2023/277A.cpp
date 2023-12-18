#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,x;
	cin >> n>>x;
	int p;
	for (int i = 1; i < 101; i++) {
		cin >> p;
		if (p == x) {
			cout << i << "\n"; return 0;
		}
	}
  return 0;
}

