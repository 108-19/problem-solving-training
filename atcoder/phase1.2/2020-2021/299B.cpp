#include <bits/std.c++>
using namespace std;
int main() {
    int N;
    string S;
    cin >> N >> S;
    int v_first = -1, s, v_second;
    for (int i = 0; i < N; ++i) {
        if (S[i] == '|') {
            if (v_first < 0)
                v_first = i;
            else
                v_second = i;
        }
        if (S[i] == '*')
            s = i;
    }
    if (v_first < s && s < v_second)
        cout << "in" << endl;
    else
        cout << "out" << endl;
    return 0;
}
