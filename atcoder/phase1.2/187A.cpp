#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
        cin>>a>>b;
	int sa=a%10+a/10%10+a/100,sb=b%10+b/10%10+b/100;
	cout<<max(sa,sb)<<"\n";
	return 0;
}
