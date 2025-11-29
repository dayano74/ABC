#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

void solve() {
  int n;
  long long h;
  cin >> n >> h;
  vector<array<long long, 3>> targets(n);
  rep(i, n) {
    long long t, l, u;
    cin >> t >> l >> u;
    targets[i] = {t, l, u};
  }
  long long prev_t = 0;
  long long low = h;
  long long high = h;
  for (auto [t, l, u] : targets) {
    long long dt = t - prev_t;
    low = max(0LL, low - dt);
    high += dt;
    low = max(low, l);
    high = min(high, u);
    if (low > high) {
      cout << "No\n";
      return;
    }
    prev_t = t;
  }
  cout << "Yes\n";
}

int main() {
  int t;
  cin >> t;
  rep(i, t) solve();
  return 0;
}
