#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  vector<ll> apos, bpos;
  rep(i, 2 * n) {
    if (s[i] == 'A')
      apos.push_back(i);
    else
      bpos.push_back(i);
  }

  ll ans1 = 0, ans2 = 0;
  rep(i, n) {
    ans1 += abs(apos[i] - (2 * i));
  }
  rep(i, n) {
    ans2 += abs(bpos[i] - (2 * i));
  }
  cout << min(ans1, ans2) << endl;
  return 0;
}
