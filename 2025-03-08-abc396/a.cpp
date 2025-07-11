#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
	int n;
	cin >> n;

	vector<string> a(n);
	rep(i, n) cin >> a[i];

	for (int i = 0; i < n - 2; ++i)
	{
		if (a[i] == a[i + 1] && a[i + 1] == a[i + 2])
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}