#include <bits/stdc++.h>
using namespace std;
int main (){
  int H,W,h,w,a,b,c;
  cin >> H >> W >> h >> w;
  a = H*W;
  b = (h*W) + ((w*H) - (h*w));
  cout<<a-b<<endl;
  return 0;
}
