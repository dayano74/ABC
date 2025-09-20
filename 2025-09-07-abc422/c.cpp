#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  rep(i, n) {
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = min({a, c, (a + b + c) / 3});
    cout << ans << '\n';
  }
  return 0;
}
