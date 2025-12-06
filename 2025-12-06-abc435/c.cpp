#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; ++i) cin >> a[i];

  int done = 1;
  for (int i = 1; i <= n && i <= done; ++i) {
    done = max(done, i + a[i] - 1);
  }

  cout << min(done, n) << endl;
  return 0;
}
