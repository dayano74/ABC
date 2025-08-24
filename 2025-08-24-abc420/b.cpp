#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> ss(n);
  rep(i, n) cin >> ss[i];

  vector<int> score(n, 0);

  rep(j, m) {
    int cnt0 = 0, cnt1 = 0;
    rep(i, n) {
      if (ss[i][j] == '0')
        cnt0++;
      else
        cnt1++;
    }
    if (cnt0 == 0 || cnt1 == 0) {
      rep(i, n) score[i]++;
    } else {
      char minority = (cnt0 < cnt1 ? '0' : '1');
      rep(i, n) {
        if (ss[i][j] == minority) score[i]++;
      }
    }
  }

  int mx = *max_element(score.begin(), score.end());
  vector<int> winners;
  rep(i, n) {
    if (score[i] == mx) winners.push_back(i + 1);
  }
  for (int x : winners) cout << x << " ";
  cout << endl;
  return 0;
}
