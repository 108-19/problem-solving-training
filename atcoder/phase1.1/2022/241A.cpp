#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[10],a,b,c;
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    a = array[0];
    b = array[a];
    c = array[b];
    cout << c;
  return 0;
}
