#include <bits/stdc++.h>
using namespace std;
int main()
{

int A,B,C;
cin>>A>>B>>C;
 if(A==B&&A==C&&B==C)
{
    cout<<"No";
}


 else if(A==B)
{
    cout<<"Yes";
}
else if(A==C)
{
    cout<<"Yes";
}
else if(B==C)
{
    cout<<"Yes";
}

else
{
    cout<<"No";
}



   return 0;
   }
