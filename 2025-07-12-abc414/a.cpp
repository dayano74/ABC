#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
	int n, start, end, cnt;
	cin >> n >> start >> end;

	cnt = 0;
	rep(i, n)
	{
		int _start, _end;
		cin >> _start >> _end;
		if (_start <= start && _end >= end)
		{
			// cout << _start << _end << endl;
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}