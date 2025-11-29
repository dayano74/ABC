#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  vector<int> inputs(3);
  cin >> inputs[0] >> inputs[1] >> inputs[2];

  int max_val = *max_element(inputs.begin(), inputs.end());
  inputs.erase(find(inputs.begin(), inputs.end(), max_val));
  int min_val = *min_element(inputs.begin(), inputs.end());
  inputs.erase(find(inputs.begin(), inputs.end(), min_val));


  cout << max_val << inputs[0] << min_val << endl;

  return 0;
}
