#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	int n;
	cin >> n;
	vector<pair<char, ll>> v(n);
	ll total = 0;
	bool flag = false;

	for (int i = 0; i < n; ++i)
	{
		char c;
		ll l;
		cin >> c >> l;
		v[i] = {c, l};
		total += l;
		if (total > 100)
		{
			flag = true;
		}
	}
	if (flag)
	{
		cout << "Too Long" << endl;
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		for (ll j = 0; j < v[i].second; ++j)
		{
			cout << v[i].first;
		}
	}
	cout << endl;
	return 0;
}