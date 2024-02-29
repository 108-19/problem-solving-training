#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  string ans = "Yes";
  ll n=s.size();
  rep(i,n-1) if(s[i]<=s[i+1]) ans = "No";
  cout << ans << endl;
  return 0;
}
