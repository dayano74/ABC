#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            for (int j = i; j < n; j++) {
                if (s[j] == 'B' && s[j * 2 - i] == 'C')
                    ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
