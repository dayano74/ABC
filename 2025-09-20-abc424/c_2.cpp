#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

// graph problem

int main() {
  int n;
  cin >> n;
  vector<vector<int>> to(n);

  vector<int> got;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    if (a == 0) {
      got.push_back(i);
    } else {
      a--;
      b--;
      to[a].push_back(i);
      to[b].push_back(i);
    }
  }

  vector<bool> visited(n);
  queue<int> q;
  for (int v : got) {
    visited[v] = true;
    q.push(v);
  }

  while (q.size()) {
    int v = q.front();
    q.pop();
    for (int u : to[v]) {
      if (visited[u]) continue;
      visited[u] = true;
      q.push(u);
    }
  }

  int ans = 0;
  rep(i, n) if (visited[i]) ans++;
  cout << ans << endl;
  return 0;
}
