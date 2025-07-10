#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
	double x;
	cin >> x;

	if (x >= 38)
		cout << 1 << endl;
	else if (x >= 37.5 && x < 38)
		cout << 2 << endl;
	else
		cout << 3 << endl;
	return 0;
}