#include<bits/stdc++.h>
using namespace std;
int main(){
int V,A,B,C;
cin>>V>>A>>B>>C;
while(V>=0){
V-=A; 
  if(V<0){ cout<<'F'<<endl; break;}
V-=B; 
  if(V<0){ cout<<'M'<<endl; break;}
V-=C; 
  if(V<0){ cout<<'T'<<endl; break;}
}
  return 0;
}
