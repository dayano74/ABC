#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> maps(h, vector<char>(w));
  rep(i, h) {
    string row;
    cin >> row;
    rep(j, w) {
      maps[i][j] = row[j];
    }
  }

  bool ans = true;
  rep(i, h) {
    rep(j, w) {
      if (maps[i][j] == '#') {
        int cnt = 0;
        if (i > 0 && maps[i - 1][j] == '#') cnt++;
        if (i < h - 1 && maps[i + 1][j] == '#') cnt++;
        if (j > 0 && maps[i][j - 1] == '#') cnt++;
        if (j < w - 1 && maps[i][j + 1] == '#') cnt++;
        if (cnt != 2 && cnt != 4) {
          ans = false;
        }
      }
    }
  }
  if (ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
