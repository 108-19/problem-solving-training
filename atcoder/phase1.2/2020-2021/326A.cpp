#include <bits/std.c++>
using namespace std;    

int main()
{
int x,y;
cin>>x;
cin>>y;
if(x==y)
    return 0;
else if(x>=y && x-y<=3)
    cout<<"Yes";
else if(x<=y && y-x<=2)
    cout<<"Yes";
else
    cout<<"No";

return 0;
}
