#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    if(pow(2,num) > (num*num))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
