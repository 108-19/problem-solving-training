#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[5];
	for (int i =0 ; i < 5; i++){
		cin >> a[i];
	}
	sort (a, a+5);
	if (a[0] == a[1] && a[2]==a[3] && a[3]==a[4]){
		cout << "Yes" << "\n";
	} else if (a[0]==a[1] && a[1]==a[2] && a[3]==a[4]){
		cout << "Yes" << "\n";
	}else {
		cout << "No" << "\n";
	}
  return 0;
}
