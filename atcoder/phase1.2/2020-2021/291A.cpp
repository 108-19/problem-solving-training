#include<iostream>
using namespace std;

int main(){
  string s;
  cin >> s;
  int l=s.size();
  for(int i=0;i<l;i++){
    if(s[i]<91){
      cout << i+1 << endl;
      return 0;
    }
  }
}
