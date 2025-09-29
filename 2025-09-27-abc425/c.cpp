#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

void solve1(int n, int& head) {
  int c;
  cin >> c;
  if (n <= 1) return;
  head += c;
  if (head > n) head -= n;
}

void solve2(int n, int head, const vector<ll>& pref) {
  int l, r;
  cin >> l >> r;
  int len = r - l + 1;
  int start = ((head + l - 2) % n) + 1;
  ll ans = pref[start + len - 1] - pref[start - 1];
  cout << ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<ll> a(n + 1);
  for (int i = 1; i <= n; ++i) cin >> a[i];
  int head = 1;
  vector<ll> pref(2 * n + 1, 0);
  for (int i = 1; i <= 2 * n; ++i) {
    pref[i] = pref[i - 1] + a[(i - 1) % n + 1];
  }
  rep(i, q) {
    int type;
    cin >> type;
    if (type == 1)
      solve1(n, head);
    else if (type == 2)
      solve2(n, head, pref);
  }
  return 0;
}
