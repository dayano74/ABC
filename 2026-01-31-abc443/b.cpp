#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;

  int ans = 0;
  for (int i = 0; k > 0; ++i) {
    k -= (n + i);
    ans++;
  }
  cout << ans - 1 << endl;
  return 0;
}
