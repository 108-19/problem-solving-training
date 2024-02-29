#include <bits/stdc++.h>

using namespace std;


int main(){
    int N;
    string S;
    cin>>N;
    cin>>S;
    int count = 0;
    for(int i = 0;i<N;i++){
        if(S[i] == '|'){
            count++;
        }
        if(count == 1){
            if(S[i] == '*'){
                cout<<"in"<<endl;
        }
    }
    }
    cout<<"out"<<endl;
    return 0;
}
