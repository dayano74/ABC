#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;

  vector<float> size(m);
  vector<float> sum(m);
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    size[a - 1] += 1;
    sum[a - 1] += b;
  }
  rep(i, m) {
    float ans;
    ans = sum[i] / size[i];
    cout << ans << endl;
  }
  return 0;
}
