#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s[10010];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=n;i>=1;i--){
		cout<<s[i]<<endl;
	}
	return 0;
} 
