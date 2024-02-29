#include <bits/std.c++>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;

    if(abs(a-b) == 1 && min(a, b)%3 != 0){
        cout << "Yes" << "\n";
    } else{
        cout << "No" << "\n";
    }

    return 0;
}
