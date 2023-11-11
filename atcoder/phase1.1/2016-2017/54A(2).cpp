#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b; 
    cin>>a>>b;
    if (a==1){
        a=14;
    }
    if (b==1){
        b=14;
    }
    if (a>b){
        cout<<"Alice";
    }
    else if (b>a){
        cout<<"Bob";
    }
    else{
        cout<<"Draw";
    }
    return 0;
}
