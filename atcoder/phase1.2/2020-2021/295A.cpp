#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string w; cin >> w;
        if(w == "and"){
            cout << "Yes" << endl;
            return 0;
        }
        if(w == "not"){
            cout << "Yes" << endl;
            return 0;
        }
        if(w == "that"){
            cout << "Yes" << endl;
            return 0;
        }
        if(w == "the"){
            cout << "Yes" << endl;
            return 0;
        }
        if(w == "you"){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
