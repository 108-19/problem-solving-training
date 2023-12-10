#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    int a=0;
    cin>>n;
    for(int i=0;i<3;i++){
    	if(n[i] == '1') a+=1;
    } 
    cout<<a;
  return 0;
}
