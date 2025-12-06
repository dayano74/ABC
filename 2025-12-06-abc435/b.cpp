#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> pref(n + 1);
  rep(i, n) pref[i + 1] = pref[i] + a[i];
  int ans = 0;
  for (int l = 0; l < n; ++l) {
    for (int r = l + 2; r <= n; ++r) {
      int sum = pref[r] - pref[l];
      bool ok = true;
      for (int j = l; j < r; ++j) {
        if (sum % a[j] == 0) {
          ok = false;
          break;
        }
      }
      if (ok) ans++;
    }
  }
  cout << ans << '\n';
  return 0;
}
