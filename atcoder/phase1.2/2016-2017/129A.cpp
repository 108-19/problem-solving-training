#include <bits/stdc++.h>
using namespace std;
int main (){
  int p,q,r,a;
  cin>>p>>q>>r;
  a = min(min(p + q,p + r),q + r);
  cout<<a<<endl;
  return 0;
}
