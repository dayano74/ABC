#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    rep(i, m) {
        if (a.size() == 0) {
            cout << "" << endl;
            return 0;
        }
        auto it = find(a.begin(), a.end(), b[i]);
        if (it != a.end()) {
            a.erase(it);
        }
    }
    if (a.size() == 0) {
        cout << "" << endl;
    } else {
        rep(i, a.size() - 1) cout << a[i] << " ";
        cout << a[a.size() - 1] << endl;
        return 0;
    }
}