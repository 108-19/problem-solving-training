#include <bits/std.c++>

using namespace std;

int main(){
    int n,a,b,c[300],i;
    cin>>n>>a>>b;
    for(i=0;i<n;i++)cin>>c[i];
    int t=a+b;
    for(i=0;i<n;i++){
	if(t==c[i]){
	    cout<<i+1;
	}
    }
    return 0;
}
