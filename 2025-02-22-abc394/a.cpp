#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '2')
            cnt++;
    }
    rep(i, cnt) cout << '2';
    cout << endl;
    return 0;
}
