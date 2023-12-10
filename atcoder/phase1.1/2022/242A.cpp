#include <bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c,x;
  double ans;
  cin>>a>>b>>c>>x;
  if(a>=x) {
    ans=1;
  }
else if (a+1<=x && x<=b) {
  ans=(double)c/(b-a);
}
  else {
    ans=0;
  }
  cout<<setprecision(12)<<ans<<endl;
  return 0;
}
