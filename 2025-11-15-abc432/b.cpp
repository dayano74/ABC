#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  string s;
  cin >> s;

  int len = s.size();
  vector<int> numbers(len);

  rep(i, len) numbers[i] = s[i] - '0';
  sort(numbers.begin(), numbers.end());
  rep(i, len) {
    if (numbers[i] != 0) {
      cout << numbers[i];
      numbers.erase(find(numbers.begin(), numbers.end(), numbers[i]));
      break;
    }
  }
  rep(i, len - 1) cout << numbers[i];
  cout << endl;

  return 0;
}
