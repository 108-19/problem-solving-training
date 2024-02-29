#include <bits/stdc++.h>
using namespace std;

int main(){
  int befor;
  for(int i=0; i<8; i++){
    int s;
    cin >> s;
    if(i != 0){
      if(befor > s) {
        cout << "No" << endl;
        
      }
    }
    if(100 > s) {
      cout << "No" << endl;
    
    }
    if(675 < s) {
      cout << "No" << endl;
     
    }
    if(s%5 != 0) {
      cout << "No" << endl;
     
    }
    befor = s;
  }
  
  cout << "Yes" << endl;
 
  return 0;
}
