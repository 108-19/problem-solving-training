#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a<10 && a>0 && b<10 && b>0)
	{
		cout<<a*b;
	}
	else
	{
		cout<<"-1";
	}
	return 0;
}
