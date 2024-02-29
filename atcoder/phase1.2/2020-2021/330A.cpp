#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,ans=0,l;
	cin>>n>>l;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		ans+=(x>=l);
	}
	cout<<ans;
	return 0;
}
