#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    string s;
    cin >> s;

    int st = -1;
    int nd = -1;

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == '#') {
            if (st == -1 && nd == -1) {
                st = i + 1;
                continue;
            }
            if (nd == -1) {
                nd = i + 1;
            }
            if (st >= 0 && nd >= 0) {
                cout << st << "," << nd << endl;
                st = -1;
                nd = -1;
            }
        }
    }
    if (st != -1)
        cout << st << endl;
    return 0;
}