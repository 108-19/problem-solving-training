#include<bits/std.c++>
using namespace std;
int main(){
string s;
cin>>s;
for(int i=0;i<s.size();i++){
s[i]=s[i]-32;
}
cout<<s;
  return 0;
}
