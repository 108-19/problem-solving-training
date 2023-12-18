#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll n;cin>>n;
  if((n-100*(n/100))/10>0){
    cout<<n-100*(n/100)<<endl;
  }
  else cout<<0<<n-100*(n/100)<<endl;
  return 0;
}
