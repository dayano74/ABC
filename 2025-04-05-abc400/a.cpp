#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a;

	if (a < 0 or (400 % a != 0))
	{
		cout << "-1" << endl;
	}
	else
	{
		b = 400 / a;
		cout << b << endl;
	}
	return 0;
}