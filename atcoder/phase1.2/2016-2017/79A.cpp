#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,f,l;
  cin >> n;
  f= n / 10;
  l= n - (n / 1000) * 1000;
  if (f % 111 == 0 || l % 111 == 0) {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
