#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
	int n, m;
	cin >> n >> m;

	const ll inf = 1e9;
	ll ans = 0;
	ll x = 1;
	rep(i, m + 1)
	{
		ans += x;
		x *= n;
		if (ans > inf)
		{
			cout << "inf" << endl;
			return 0;
		}
	}
	cout << ans << endl;
	return 0;
}