#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    if (s[0] == '.') {
        s[0] = 'o';
    }
    rep(i, n - 1) {
        if (s[i] == '#' && s[i + 1] == '#')
            continue;
        if (s[i] == '#') {
            s[i + 1] = 'o';
        }
    }
    cout << s << endl;
    return 0;
}
