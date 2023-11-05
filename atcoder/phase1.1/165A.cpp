#include<iostream>
using namespace std;
int main()
{
  int n,a,b;
  cin>>n>>a>>b;
  int ans=(b/n)*n;
  if(a<=ans) {
    cout<<"OK";
  }
  else {
    cout<<"NG";
}
return 0;
}
