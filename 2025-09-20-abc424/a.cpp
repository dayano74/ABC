#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a == b) {
    cout << "Yes" << endl;
    return 0;
  } else if (a == c) {
    cout << "Yes" << endl;
    return 0;
  } else if (b == c) {
    cout << "Yes" << endl;
    return 0;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
