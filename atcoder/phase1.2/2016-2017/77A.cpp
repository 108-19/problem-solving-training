#include <bits/stdc++.h>
using namespace std;
int main(){
    string i,j;
    cin >>i>>j;
    if(i[0] == j[2] && i[1] == j[1] && i[2] == j[0]){
      cout << "YES";
    }
    else {
      cout << "NO";
    }
    return 0;
}


