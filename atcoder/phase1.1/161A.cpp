#include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
int x=a,y=b,z=c;
x=y;
y=a;
z=x;
x=c;
cout<<x<<' '<<y<<' '<<z;

    return 0;
}
