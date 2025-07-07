#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, cnt;

	cnt = 0;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cin >> k;
	cnt = 0;
	for (int i = 0; i < n; i++)
		if (k <= a[i])
			cnt++;
	cout << cnt << endl;
}