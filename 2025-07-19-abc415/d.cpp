#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll n;
    int m;

    cin >> n >> m;
    vector<pair<ll, ll>> ps;
    rep(i, m) {
        ll a, b;
        cin >> a >> b;
        ps.emplace_back(a - b, a);
    }
    sort(ps.begin(), ps.end());

    ll ans = 0;
    for (auto [d, a] : ps) {
        if (n < a)
            continue;
        ll x = (n - a) / d + 1;
        ans += x;
        n -= d * x;
    }
    cout << ans << endl;
    return 0;
}