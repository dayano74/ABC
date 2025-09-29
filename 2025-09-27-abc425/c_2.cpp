#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> s(n + 1);
  rep(i, n) s[i + 1] = s[i] + a[i];
  int si = 0;

  rep(qi, q) {
    int type;
    cin >> type;
    if (type == 1) {
      int c;
      cin >> c;
      si = (si + c) % n;
    }
    if (type == 2) {
      int l, r;
      cin >> l >> r;
      l--;
      r--;
      l = (l + si) % n;
      r = (r + si) % n;
      ll ans;
      if (l <= r)
        ans = s[r + 1] - s[l];
      else
        ans = s[n] - (s[l] - s[r + 1]);
      cout << ans << '\n';
    }
  }
  return 0;
}
