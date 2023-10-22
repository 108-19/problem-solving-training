#include <bits/stdc++.h>
#define Martina ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
      Martina
          int a,b; cin>>a>>b;
          if ((a != 1 && b != 1 && a > b) || (a == 1 && b > a)) {
              cout << "Alice";
           }
           else if ((b != 1 && a != 1 && b > a) || (b == 1 && a > b)) {
             cout << "Bob";
           } 
           else {
             cout << "Draw";
           }
     
      return 0;
    }
