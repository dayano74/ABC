#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(n), mins(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  ll sum = 0;
  rep(i, n) {
    mins[i] = min(a[i], b[i]);
    sum += mins[i];
  }

  rep(i, m) {
    char ab;
    int x, v;
    cin >> ab >> x >> v;
    --x;
    sum -= mins[x];
    if (ab == 'A')
      a[x] = v;
    else
      b[x] = v;
    mins[x] = min(a[x], b[x]);
    sum += mins[x];
    cout << sum << endl;
  }
  return 0;
}
