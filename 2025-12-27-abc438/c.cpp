#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<pair<int, int>> st;
  st.reserve(n);

  for (int x : a) {
    if (!st.empty() && st.back().first == x) {
      st.back().second++;
      if (st.back().second == 4) st.pop_back();
    } else {
      st.push_back({x, 1});
    }
  }

  ll ans = 0;
  for (auto [v, cnt] : st) ans += cnt;
  cout << ans << "\n";
  return 0;
}
