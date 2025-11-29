#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  ll N, X, Y;
  cin >> N >> X >> Y;
  vector<ll> A(N);
  for (auto& a : A) cin >> a;

  ll D = Y - X;
  ll G = __gcd(X, D);
  ll M = D / G;
  ll r = A[0] % M;

  for (auto a : A) {
    if (a % M != r) {
      cout << -1 << endl;
      return 0;
    }
  }

  ll C = (X * A[0]) % D;
  ll low = 0;
  ll high = LLONG_MAX / 2;

  for (auto a : A) {
    ll min_weight = X * a;
    ll max_weight = X * a + a * D;
    low = max(low, min_weight);
    high = min(high, max_weight);
  }

  if (low > high) {
    cout << -1 << endl;
    return 0;
  }

  ll diff = (C - low % D + D) % D;
  ll W = low + diff;

  if (W > high) {
    cout << -1 << endl;
    return 0;
  }

  ll steps = (high - W) / D;
  ll W_max = W + steps * D;

  ll total_large_candies = 0;
  for (auto a : A) {
    ll large_candies = (W_max - X * a) / D;
    total_large_candies += large_candies;
  }

  cout << total_large_candies << endl;
  return 0;
}