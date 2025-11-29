#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v(3);
  cin >> v[0] >> v[1] >> v[2];
  sort(v.rbegin(), v.rend());
  cout << v[0] << v[1] << v[2] << endl;
  return 0;
}
