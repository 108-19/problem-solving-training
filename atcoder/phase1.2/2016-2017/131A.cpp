#include <bits/stdc++.h>
using namespace std;
int main (){
  char s[4];
  cin>>s[0]>>s[1]>>s[2]>>s[3];
  if(s[0]==s[1] || s[1]==s[2] || s[2]==s[3]){
    cout<<"Bad"<<endl;
    }
  else{
    cout<<"Good"<<endl;
  }
  return 0;
}
