#include <bits/stdc++.h>
#define Martina ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
        Martina
          int a,b,c,d; cin>>a>>b>>c>>d;
          int area1=a*b;
          int area2=c*d;
          if (area1>area2){
              cout<<area1;
          }
          else if (area2>area1){
              cout<<area2;
          }
          else {
              cout<<area1;
          }      
              return 0;
        }
