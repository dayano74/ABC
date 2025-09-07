#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) {
    cin >> s[i];
  }
  int m;
  string ns;
  cin >> m >> ns;
  if (s[m - 1] == ns)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
