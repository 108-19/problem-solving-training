#include<bits/stdc++.h>
using namespace std;
int main(){
int N,K,T,C;
K=0;
cin>>N;
for(int i=1;i<=N;i++){
    cin>>T;
    if(T>K){K=T; C=i;}
}
cout<<C<<endl;
return 0;
}
