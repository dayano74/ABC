#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  long long T;
  cin >> n >> T;

  if (n == 0) {
    cout << T << endl;
    return 0;
  }

  vector<long long> a(n);
  rep(i, n) cin >> a[i];

  long long ans = 0;
  long long open = 0;
  rep(i, n) {
    if (a[i] < open) continue;
    if (a[i] >= T) break;
    ans += a[i] - open;
    open = a[i] + 100;
    if (open >= T) {
      cout << ans << endl;
      return 0;
    }
  }
  ans += T - open;
  cout << ans << endl;
  return 0;
}
