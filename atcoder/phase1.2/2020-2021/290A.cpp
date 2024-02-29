#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, b;
    int a[100];


    int t = 0;

    cin >> n;
    cin >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i]; 
    }


    for(int i = 0; i < m; i++){
        cin >> b;
        t += a[b-1];
    }

    cout << t << endl;

    return 0;
}
