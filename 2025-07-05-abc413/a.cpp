#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	int ret;
	ret = 0;
	for (int i = 0; i < n; i++)
		ret += a[i];
	if (ret > m)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
}
