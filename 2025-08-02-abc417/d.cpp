#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

void solve(const vector<int> &p, const vector<int> &a, const vector<int> &b,
           int x) {
    rep(i, p.size()) {
        if (p[i] >= x) {
            x += a[i];
        } else {
            if (x < b[i]) {
                x = 0;
            } else {
                x -= b[i];
            }
        }
    }
    cout << x << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    vector<int> a(n);
    vector<int> b(n);

    rep(i, n) cin >> p[i] >> a[i] >> b[i];

    int q;
    cin >> q;

    rep(i, q) {
        int x;
        cin >> x;
        solve(p, a, b, x);
    }

    return 0;
}
