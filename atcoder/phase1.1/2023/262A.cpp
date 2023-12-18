#include <bits/stdc++.h>
using namespace std;
int main(){
  ll y;
  cin>>y;
  if(y%4==2){
    cout<<y<<endl;
  }
  else if(y%4==3) {
    cout<<y+3<<endl;
  }
  else {
    cout<<y+2-y%4<<endl;
}
return 0;
}
