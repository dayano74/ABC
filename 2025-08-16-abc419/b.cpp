#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int q;
  cin >> q;

  int type, x;
  vector<int> balls;
  rep(i, q) {
    cin >> type;
    if (type == 1) {
      cin >> x;
      balls.push_back(x);
      sort(balls.begin(), balls.end());
    } else if (type == 2) {
      cout << balls.front() << endl;
      balls.erase(balls.begin());
    }
  }
  return 0;
}
