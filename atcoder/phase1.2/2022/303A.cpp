#include <bits/std.c++>

using namespace std;

int main() {
    int t,count=0;
    cin >> t;
    string s,c;
    cin>>s;
    cin>>c;
    for(int i=0;i<t;i++){
        if(s[i]==c[i])
          count++;
        else if(s[i]=='1' && c[i]=='l' ||c[i]=='1' && s[i]=='l')
          count++;
        else if(s[i]=='0' && c[i]=='o' ||c[i]=='0' && s[i]=='o')
          count++;
    }
    if(count==t)cout<<"Yes";
    else cout<<"No";
    return 0;
}
