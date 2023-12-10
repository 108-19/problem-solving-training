#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int tp = n;
  int m = 0;
  m = m*10 + (n%10);
  n /= 10;
 
  m = m*10 + (n%10);
  n /= 10;
 
  m = m*10 + n;
 
  if (tp == m) 
    cout << "Yes";
  else 
    cout << "No";
  return 0; 
}
