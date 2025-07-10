#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main()
{
	string str;
	cin >> str;

	int cnt = 0;
	char target = 'i';

	for (char c : str)
	{
		if (target == 'i')
		{
			if (c == 'i')
			{
				target = 'o';
				continue;
			}
			else
			{
				cnt++;
				continue;
			}
		}
		else
		{
			if (c == 'o')
			{
				target = 'i';
				continue;
			}
			else
			{
				cnt++;
				continue;
			}
		}
	}
	if (str[str.length() - 1] != 'o')
		cnt++;
	cout << cnt << endl;
	return 0;
}