#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    for (int i = n - 2; i >= 0; i--) {
        if (s.substr(i, 2) == "WA") {
            s[i] = 'A';
            s[i + 1] = 'C';
        }
    }
    cout << s << endl;
    return 0;
}
