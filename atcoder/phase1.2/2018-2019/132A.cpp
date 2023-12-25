#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a,b,c,d;
	cin>>a>>b>>c>>d;
	if (a == b && c == d && a != c)
	{
		cout << "Yes";
	} 
	else if (a == c && b == d && a != b)
	{
		cout << "Yes";
	}
	else if (a == d && b == c && a != b)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
    return 0;
}
