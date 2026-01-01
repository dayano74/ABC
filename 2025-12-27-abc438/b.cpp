#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;

  string s, t;
  cin >> s >> t;

  int ans = 1e9;

  for (int i = 0; i + m <= n; i++) {
    int cur = 0;
    for (int j = 0; j < m; j++) {
      int sd = s[i + j] - '0';
      int td = t[j] - '0';
      cur += (sd - td + 10) % 10;
    }
    ans = min(ans, cur);
  }

  cout << ans << "\n";
  return 0;
}
