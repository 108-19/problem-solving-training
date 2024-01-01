#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a,x,y,price,N;
  cin>>n>>a>>x>>y;
  if(n<=a)
  {
  	price=n*a;
  	cout << price;
  }
	else
	{
       N=n-a;
	  price=(a*x)+(N*y);
	  cout<<price;
  }
    return 0;
}
