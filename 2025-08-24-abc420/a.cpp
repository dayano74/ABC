#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int x, y;
  cin >> x >> y;

  int total = x + y;
  if (total > 12) {
    cout << total - 12 << endl;
  } else {
    cout << total << endl;
  }
  return 0;
}
