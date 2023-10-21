#include <bits/stdc++.h>
#define Martina ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    Martina
       int N; cin>>N;
           if(N>=15){
               cout<<N*800-N/15*200;
           }
           else {
               cout<<N*800;
           }
               return 0;
        }
