#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << "0" << endl;
    return 0;
  }
  int r_min, c_min, r_max, c_max;
  cin >> r_min >> c_min;
  int r, c;
  cin >> r >> c;
  if (r < r_min) {
    r_max = r_min;
    r_min = r;
  } else {
    r_max = r;
  }
  if (c < c_min) {
    c_max = c_min;
    c_min = c;
  } else {
    c_max = c;
  }
  if (n >= 3) {
    rep(i, n - 2) {
      cin >> r >> c;
      if (r < r_min) r_min = r;
      if (r > r_max) r_max = r;
      if (c < c_min) c_min = c;
      if (c > c_max) c_max = c;
    }
  }
  //   cout << r_max << r_min << c_max << c_min << endl;
  int dis = r_max - r_min > c_max - c_min ? r_max - r_min : c_max - c_min;
  int ans = dis % 2 == 0 ? dis / 2 : dis / 2 + 1;
  //   cout << "dis " << dis << endl;
  //   cout << dis / 2 << endl;
  cout << ans << endl;
  return 0;
}
