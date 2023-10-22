#include <bits/stdc++.h>
#define Martina ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
    Martina
    string s; cin>>s;
    if(s[0]!=s[1] && s[0]!=s[2] && s[1]!=s[2]){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
      return 0;
    }
