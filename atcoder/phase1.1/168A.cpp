#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n%=10;
    if(n==3) {
      cout<<"bon";
    }
    else if(n<2 || n==6 || n==8) {
    cout<<"pon";
    }
    else {
      cout<<"hon";
    }
    return 0;
}
