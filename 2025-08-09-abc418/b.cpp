#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  string s;
  cin >> s;

  if (s.size() < 3) {
    cout << "0\n";
    return 0;
  }
  int length = s.size();
  double ans = 0.0;
  for (int i = 0; i < length; ++i) {
    int t_cnt = 0;
    for (int j = i; j < length; ++j) {
      if (s[j] == 't') t_cnt++;
      int len = j - i + 1;
      int inner_len = len - 2;
      if (inner_len <= 0) continue;
      if (t_cnt >= 2) {
        int inner_t = t_cnt - 2;
        if (inner_t < 0) continue;
        double ret = (double)inner_t / (double)inner_len;
        if (ret > ans) ans = ret;
      }
    }
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}
