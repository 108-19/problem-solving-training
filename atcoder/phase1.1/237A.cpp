#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a;
    cin >> a;
    if (a>=pow(-2,31) && a<pow(2,31))
    cout << "Yes" << endl;
    else
    cout << "No" << endl;
    return 0;
}
