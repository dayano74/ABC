#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, l, r;
    cin >> n >> l >> r;

    string s;
    cin >> s;

    bool is_o = true;
    for (int i = l - 1; i < r; i++) {
        if (s[i] != 'o') {
            is_o = false;
        }
    }
    if (is_o) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}
