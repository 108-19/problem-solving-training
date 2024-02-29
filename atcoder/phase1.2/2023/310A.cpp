#include <bits/std.c++>
using namespace std;
int main() {
  int n, p, q, min, tmp;
  cin >> n >> p >> q;

  cin >> min;
  for (int i = 1; i < n; i++) {
   cin >> tmp;
    if (tmp < min) min = tmp;
  }

  cout << (p < q + min ? p : q + min) << endl;

  return 0;
}
