#include<bits/stdc++.h>
using namespace std;
int main(){
int H,W,S=0;
string A;
cin>>H>>W;
for(int i=0;i<H;i++){
    cin>>A;
    for(int j=0;j<W;j++)
   { if(A[j]=='#') S+=1;}
}
cout<<S<<endl;
  return 0;
}
