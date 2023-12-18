#include<bits/stdc++.h>
using namespace std;
int main(){
int N,X;
cin>>N>>X;
cout<<char('A'+(X+N-1)/N-1)<<endl;
return 0;
}
