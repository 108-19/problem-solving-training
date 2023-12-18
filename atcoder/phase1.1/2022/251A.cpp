#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	string s;
	cin>>s;
	int cnt=0;
	for(int i=0;i<s.size();i++) cnt++;
	if(cnt==3) 
    cout<<s<<s;
	if(cnt==2){
		for(int i=0;i<6;i+=2){
			for(int j=0;j<s.size();j++)
        cout<<s[j];
		}
	}
	if(cnt==1){
		for(int i=0;i<6;i++){
			for(int j=0;j<s.size();j++) 
        cout<<s[j];
		}
	}
	return 0;
}
