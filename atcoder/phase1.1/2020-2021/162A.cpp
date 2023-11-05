#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  while (n > 0)
  {
    int x;
    x = n % 10;
    n = n / 10;
    if (x == 7)
    {
      cout << "Yes";
  }
    else{
      cout << "No";
    }
  return 0;
}
