#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(b>=min(a,c)&&b<=max(a,c)) 
  cout<<"Yes";
else 
  cout<<"No";
return 0;
}
