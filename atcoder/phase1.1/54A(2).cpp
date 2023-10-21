#include <bits/stdc++.h>
#define Martina ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    Martina
      int a,b; cin>>a>>b;
      if (a==1){
          a=14;
      }
      if (b==1){
          b=14;
      }
      if (a>b){
          cout<<"Alice";
      }
      else if (b>a){
          cout<<"Bob";
      }
      else{
          cout<<"Draw";
      }
      return 0;
    }
