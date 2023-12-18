#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
    for(int i=0;i<10;i++){
      if(n/16==i){
        cout<<i;
      }
    }
    if(n/16==10){
      cout<<'A';
    }
    if(n/16==11){
      cout<<'B';
    }
    if(n/16==12){
      cout<<'C';
    }
    if(n/16==13){
      cout<<'D';
    }
    if(n/16==14){
      cout<<'E';
    }
    if(n/16==15){
      cout<<'F';
    }
    for(int i=0;i<10;i++){
      if(n%16==i){
        cout<<i;
      }
    }
    if(n%16==10){
      cout<<'A';
    }
    if(n%16==11){
      cout<<'B';
    }
    if(n%16==12){
      cout<<'C';
    }
    if(n%16==13){
      cout<<'D';
    }
    if(n%16==14){
      cout<<'E';
    }
    if(n%16==15){
      cout<<'F';
    }
  return 0;
}
