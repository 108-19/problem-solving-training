#include <bits/stdc++.h>
using namespace std;
int main (){
  char s[3],t[3];
  int sum = 0;
  cin >> s[0] >> s[1] >> s[2] >> t[0] >> t[1] >> t[2];
  for(int i=0; i<3 ;i++){
    if(s[i] == t[i]){
      sum++;
    }
  }
  cout << sum << endl;
  return 0;
}
