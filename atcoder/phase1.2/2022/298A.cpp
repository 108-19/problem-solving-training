#include <bits/std.c++>
using namespace std;
int main(){
    ll n;
    string s;
    cin >> n >> s;
    bool good=false;
    for(char c:s){
        if(c=='x'){
            cout << "No";
            return 0;
        }
        else if(c=='o')
          good=true;
    }
    if(good)
      cout << "Yes";
    else 
      cout << "No";
  return 0;
}
