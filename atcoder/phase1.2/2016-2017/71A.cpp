#include <bits/stdc++.h>
using namespace std; 
int main (){
    int n,a,b;
    cin>>n>>a>>b;
    if(abs(a-n)<abs(b-n)){
        cout<< "A";
    }
    else
    {
        cout<< "B";
    }
  return 0;  
}
