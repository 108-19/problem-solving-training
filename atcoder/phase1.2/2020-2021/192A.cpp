#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
    cin>>n;
    if(n%100==0){
        cout<<"100"<<endl;
    }
    else {
        x=100-n%100;
        cout<<x<<endl;
    }
return 0;
}
