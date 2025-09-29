#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> cnt(n + 1);
  rep(i, n) {
    if (a[i] != -1) cnt[a[i]]++;
  }
  rep(i, n) {
    if (a[i] == -1) {
      for (int j = 1; j <= n; j++) {
        if (cnt[j] == 0) {
          a[i] = j;
          cnt[j]++;
          break;
        }
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    if (cnt[i] != 1) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  rep(i, n) cout << a[i] << ' ';
  cout << endl;
  return 0;
}
