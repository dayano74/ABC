#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
	int n, r, k;
	cin >> n;
	r = 1;
	k = 0;
	vector<int> p(n);
	vector<int> idx(n);

	rep(i, n) cin >> p[i];
	rep(i, n) idx[i] = -1;

	if (n == 1)
	{
		cout << "1\n";
		return 0;
	}
	while (r < n)
	{
		r += k;
		int max = 0;
		rep(i, n)
		{
			if (max < p[i])
				max = p[i];
		}
		k = 0;
		rep(i, n)
		{
			if (max == p[i])
			{
				idx[i] = r;
				p[i] = -1;
				k++;
			}
		}
	}
	rep(i, n) cout << idx[i] << endl;
	return 0;
}