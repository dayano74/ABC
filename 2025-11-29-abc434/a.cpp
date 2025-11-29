#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int w, b;
  cin >> w >> b;

  w *= 1000;
  int n = w / b;
  if (w >= n * b) cout << n + 1 << endl;
  else cout << n << endl;
  return 0;
}
