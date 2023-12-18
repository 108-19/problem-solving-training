#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,hako,ans=0;
  cin >> n;
  for (int i=0;i<n;++i){
    cin >> hako;
    ans+=hako;
  }
  cout << ans << endl;
  return 0;
}
