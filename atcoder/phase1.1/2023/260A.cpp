#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s[0]==s[1] and s[1] == s[2]){
    	cout<<-1;
    	return 0;
	}else if(s[0]==s[1] and s[1]!=s[2]){
		cout<<s[2];
		return 0;
	}else if(s[0]==s[2] and s[2]!=s[1]){
		cout<<s[1];
		return 0;
	}else cout<<s[0];
    
   return 0;
}
