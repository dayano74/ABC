#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  vector<int> points(n, 0);
  vector<int> ans(n);
  int idx = 0;
  rep(i, k) {
    int a, b;
    cin >> a >> b;
    points[a - 1]++;
    rep(i, n) {
      if (points[i] == m) {
        ans[idx++] = i + 1;
        points[i] = 0;
      }
    }
  }
  for (int i = 0; i < size(ans); i++) {
    if (ans[i] == 0) break;
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}
