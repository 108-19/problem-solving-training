#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i*2<s.size();++i){
        swap(s[2*i],s[2*i+1]);
    }
    cout<<s;
}
