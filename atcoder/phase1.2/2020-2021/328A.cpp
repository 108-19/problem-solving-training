#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,x,ans=0;
  cin>>n>>x;
  rep(i,n){
    int a;
    cin>>a;
    if(a<=x) 
      ans+=a;
  }
  cout<<ans<<endl;
  return 0;
}
