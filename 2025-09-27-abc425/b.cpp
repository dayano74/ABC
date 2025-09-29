#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> p(n, 0);
  vector<int> nums(n);

  rep(i, n) cin >> a[i];
  rep(i, n) nums[i] = i + 1;

  rep(i, n) {
    if (a[i] != -1) {
      if (nums[a[i] - 1] == 0) {
        cout << "No" << endl;
        return 0;
      }
      nums[a[i] - 1] = 0;
    }
  }
  int idx = 0;
  rep(i, n) {
    if (a[i] == -1) {
      while (idx < n && nums[idx] == 0) idx++;
      p[i] = nums[idx];
      idx++;
    } else {
      p[i] = a[i];
    }
  }
  cout << "Yes" << endl;
  rep(i, n) cout << p[i] << " ";
  cout << endl;
  return 0;
}
