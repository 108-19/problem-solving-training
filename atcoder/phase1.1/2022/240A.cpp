#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >>a>>b;
    int big = max(a, b);
    int small = min(a, b);
    if (big == 10 && small == 1)
    {
        cout << "Yes";
    }
    else if (big - small == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
  return 0;
}
