#include <iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    cin>>a>>b>>c;
    if (a >= b && a >= c)
    {
        sum = a + max(b, c);
    }
    else if (b >= a && b >= c)
    {
        sum = b + max(a, c);
    }
    else
    {
        sum = c + max(a, b);
    }

    cout << sum << endl;

    return 0;
}
