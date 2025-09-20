#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> g(N + 1);
  vector<char> learned(N + 1, 0);
  queue<int> q;
  int ans = 0;

  for (int i = 1; i <= N; ++i) {
    int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0) {
      if (!learned[i]) {
        learned[i] = 1;
        q.push(i);
        ++ans;
      }
    } else {
      g[a].push_back(i);
      if (b != a) g[b].push_back(i);
    }
  }

  while (!q.empty()) {
    int x = q.front();
    q.pop();
    for (int i : g[x]) {
      if (learned[i]) continue;
      learned[i] = 1;
      q.push(i);
      ++ans;
    }
  }

  cout << ans << '\n';
  return 0;
}
