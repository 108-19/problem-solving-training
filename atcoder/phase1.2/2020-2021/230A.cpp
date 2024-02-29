#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  cout << "AGC0";
  if(n>=42)
    n++;
  if(n<10) 
    cout << 0;
  cout << n << endl;
}
