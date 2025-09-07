#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  ll x, y;
  cin >> x >> y;

  ll a1, a2;
  a1 = x;
  a2 = y;

  ll ai = 0;
  for (int i = 3; i <= 10; ++i) {
    ai = a1 + a2;
    if (ai >= 10) {
      string s = to_string(ai);
      int length = size(s);

      rep(i, length / 2) {
        swap(s[i], s[length - i - 1]);
      }
      ai = stoll(s);
    }
    a1 = a2;
    a2 = ai;
  }
  cout << ai << endl;
  return 0;
}
