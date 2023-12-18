#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1;
	cin >> str1;
	int a[10] = { 0 };
	for (int i = 0;i < str1.size();i++)
	{
		a[(int)(str1[i]-'0')] = 1;
	}
	for (int i = 0;i < 10;i++)
	{
		if (a[i]==0)
		{
			cout << i << endl;
		}
	}
	return 0;
}

