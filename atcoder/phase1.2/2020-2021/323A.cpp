#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  string ans = "Yes";
  rep(i,16) if(i%2) if(s[i]=='1') ans = "No";
  cout << ans << endl;
  return 0;
}
