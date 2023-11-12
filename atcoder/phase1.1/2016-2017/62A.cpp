#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[7] = {1, 3, 5, 7, 8, 10, 12,};
  int b[4] = {4, 6, 9, 11};
  int c[1] = {2};
  int x,y;
  cin >> x >> y;
  if (x == a[0] || x == a[1] || x == a[2] || x == a[3] || x == a[4] || x == a[5] || x == a[6] )
  {
    if(y == a[0] || y == a[1] || y == a[2] || y == a[3] || y == a[4] || y == a[5] || y == a[6])
    {
      cout << "Yes";
    }
    else
    {
      cout << "No";
    }
  }
  else if (x == b[0] || x == b[1] || x == b[2] || x == b[3])
  {
    if(y == b[0] || y == b[1] || y == b[2] || y == b[3])
    {
      cout << "Yes";
    }
    else
    {
      cout << "No";
    }
  }
  else if (x == c[0])
  {
    if(y == c[0])
    {
      cout << "Yes";
    }
    else{
      cout << "No";
    }
  }
        return 0;
    }
