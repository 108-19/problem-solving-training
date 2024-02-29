#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,s,k,ans=0;
  cin>>n>>s>>k;
  rep(i,n){
    int p1,q1;
    cin>>p1>>q1;
    ans+=p1*q1;
  }
  if(ans>=s)
    cout<<ans<<endl;
  else
    cout<<ans+k<<endl;
  return 0;
}
