#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  string s;
  cin >> s;

  int i, j;
  i = s[0] - '0';
  j = s[2] - '0';

  if (j != 8) {
    j++;
  } else if (i != 8 && j == 8) {
    i++;
    j = 1;
  }
  cout << i << '-' << j << endl;
  return 0;
}
