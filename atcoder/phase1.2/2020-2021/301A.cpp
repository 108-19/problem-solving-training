#include <bits/stdc++.h>
using namespace std;
int main() {
  int N;
  string S;
  cin >> N >> S;
  int winner = (N + 1) / 2;
  int t = 0, a = 0;
  string ans = "";
  for (int i = 0; i < N; ++i) {
    if (S[i] == 'T') 
      ++t;
    if (S[i] == 'A') 
      ++a;
    if (winner == t) {
      ans = "T";
      break;
    }
    if (winner == a) {
      ans = "A";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
