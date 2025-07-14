#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int house_cnt, elec_cnt;
    cin >> house_cnt >> elec_cnt;

    vector<ll> points(house_cnt);
    vector<ll> p_diff(house_cnt - 1);
    rep(i, house_cnt) cin >> points[i];
    sort(points.begin(), points.end());
    rep(i, house_cnt - 1) p_diff[i] = points[i] - points[i + 1];

    rep(i, elec_cnt - 1) p_diff.pop_back();
    ll ans = 0;
    for (ll n : p_diff) {
        ans += n;
    }
    return 0;
}
