#include<bits/stdc++.h>
using namespace std;

int main(){

    int N,M,P;
    cin>>N>>M>>P;

    if(N-M<0)
      cout<<0;
    else     
      cout<<(N-M)/P+1;

    return 0;
}
