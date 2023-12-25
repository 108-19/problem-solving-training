#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	int c=n*a;
	if(c>b) {
		cout<<b;
	  }
  else if(c<b) {
		cout<<c;
	  }
  else if(c==b) {
		cout<<c;
	  }
	return 0;
}
